///*
//	floyd�㷨��
//			���ǻ�����һ��dist�����path���飬dist������������i��j��Ȩֵ��
//			path������������i��j�����Ǹ�����
//*/
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//};
//void floyd(AMGraph* G, int path[][MAXSIZE]) {
//	int dist[MAXSIZE][MAXSIZE];
//	for ( int m = 0; m < G->numV; m++) {
//		for ( int n = 0; n < G->numV; n++) {
//			dist[m][n] = G->Edge[m][n];
//			G->Edge[m][n] == 32767 ? path[m][n] = -1 : path[m][n] = m;
//		}
//	}
//
//	for ( int k = 0; k < G->numV; k++) {//���μ��붥�㣬�жϼ��뵱ǰ������·���Ƿ��б仯
//		for ( int i = 0; i < G->numV; i++) {
//			for ( int j = 0; j < G->numV; j++) {
//				if (dist[i][j] > G->Edge[i][k] + G->Edge[k][j]) {
//					dist[i][j] = G->Edge[i][k] + G->Edge[k][j];
//					path[i][j] = k;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < G->numV; i++)
//	{
//		for (int j = 0; j < G->numV; j++)
//			printf("%2d  ", dist[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//	for (int i = 0; i < G->numV; i++)
//	{
//		for (int j = 0; j < G->numV; j++)
//			printf("%2d  ", path[i][j]);
//		printf("\n");
//	}
//}
//void printPath(int path[][MAXSIZE], int vi, int vj) {
//	static int end = vj;
//	if (path[vi][vj] == vi) {//ֱ�����
//		vj == end ? printf("%d ", vj ): printf("%d->", vj );//�����Ŵ�1��ʼ����ô����ͼ�һ
//	}
//	else {
//		int mid = path[vi][vj];
//		printPath(path, vi, mid);
//		printPath(path, mid, vj);
//	}
//}
//int main() {
//	void createGraphFromFile(AMGraph*);
//	void dispGraph(AMGraph*);
//	AMGraph G;
//	createGraphFromFile(&G);
//	dispGraph(&G);
//	int path[MAXSIZE][MAXSIZE];
//	floyd(&G, path);
//	printf("%d->",0);
//	printPath(path, 0, 2);
//	return 0;
//}
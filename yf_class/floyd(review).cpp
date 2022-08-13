///*
//	floyd算法：
//			我们会设置一个dist数组和path数组，dist数组用于描述i到j的权值，
//			path数组用于描述i到j经过那个顶点
//*/
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//};
//void floyd(AMGraph* G, int path[][MAXSIZE]) {
//
//	int dist[MAXSIZE][MAXSIZE];
//	for (int m = 0; m < G->numV; m++) {
//		for (int n = 0; n < G->numV; n++) {
//			dist[m][n] = G->Edge[m][n];
//			G->Edge[m][n] == 32767 ? path[m][n] = -1 : path[m][n] = m;
//		}
//	}
//
//	for (int k = 0; k < G->numV; k++) { //加入顶点后依次判断路径长度是否变化
//		for (int m = 0; m < G->numV; m++) {
//			for (int n = 0; n < G->numV; n++) {//任意两个顶点的距离
//				if (dist[m][n] > G->Edge[m][k] + G->Edge[k][n]) {
//					dist[m][n] = G->Edge[m][k] + G->Edge[k][n];
//					path[m][n] = k;
//				}
//
//			}
//		}
//	}
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
//	if (path[vi][vj] == vi) {//直接输出
//		vj == end ? printf("%d ", vj ): printf("%d->", vj );//如果序号从1开始，那么结果就加一
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
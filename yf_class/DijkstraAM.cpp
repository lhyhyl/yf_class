///*
//	Dijkstra �㷨��
//				��ʵ���㷨��prim�㷨���ƣ���ͬ�Ľ����Ǹ�����һ��
//				����������Ȼ��Ҫ�õ�һ���������flag,���ڼ�¼�����Ƿ��ѱ����ʣ�һ��·������dist�����ڼ�¼
//				Ŀǰ���������ľ��룬�������ǻ���Ҫһ��ǰ�ö�������prevs�����ڴ洢·��
//
//*/
//#define MAXSIZE 100 //�������ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//};
//
//void dijkstra(AMGraph* G, int start) {
//	int* flag = (int*)malloc(sizeof(int)*G->numV);//�������
//	int* prevs = (int*)malloc(sizeof(int) * G->numV);//�洢·����ǰ������
//	int* dist = (int*)malloc(sizeof(int) * G->numV);//��������ľ�������
//
//	for (int i = 0; i < G->numV;i++) {//��ʼ��������
//		flag[i] = 0;
//		prevs[i] = 0;
//		dist[i] = G->Edge[start][i];
//	}
//
//	int k = start;//��¼��ǰ����Ķ���
//	flag[k] = 1;
//	for (int i = 0; i < G->numV; i++) {
//		if (i == k)
//			continue;
//		int min = 32767;
//		for (int j = 0; j < G->numV;j++) {
//			if (!flag[j] && min > dist[j]) {
//				min = dist[j];
//				k = j;//��¼��ǰ�ڵ�
//			}
//
//		}
//		flag[k] = 1;
//		for (int m = 0; m < G->numV;m++) {
//			if (!flag[m] && dist[m] > dist[k] + G->Edge[k][m]) {
//				dist[m] = dist[k] + G->Edge[k][m];
//				prevs[m] = k;
//			}
//		}
//	}
//
//	for (int i = 0; i < G->numV; i++) {
//		i == start ? printf("%d ", 0) : printf("%d ", G->Vertex[prevs[i]] - 48);
//	}
//	printf("\n");
//	for (int i = 0; i < G->numV; i++) {
//		printf("%d ", dist[i]);
//	}
//}
//int main() {
//	void createGraphFromFile(AMGraph*);
//	void dispGraph(AMGraph * G);
//	AMGraph* G = (AMGraph*)malloc(sizeof(AMGraph));
//	createGraphFromFile(G);
//	dispGraph(G);
//	dijkstra(G, 0);
//	return 0;
//}
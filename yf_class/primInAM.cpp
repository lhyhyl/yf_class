///*
//	prim�㷨�����ڽӾ���ʽ�洢��ͼ�е�ʵ��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100 //�������ֵ
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	char Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//};
//
//int getSum(AMGraph *G, int *prims) {//�����С��������Ȩֵ
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (G->Edge[prims[j]][prims[i]] < min) {
//				min = G->Edge[prims[j]][prims[i]];//���ˣ���prims[j]д����j�����ҵ����˺þã�����
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void prim(AMGraph *G, int start) {
//	int lowCost[MAXSIZE], prims[MAXSIZE];
//	int index = 0;
//	prims[index++] = start;
//	int k = start;
//	for (int i = 0; i < G->numV;i++) {//��ʼ��lowCost
//		lowCost[i] = G->Edge[start][i];
//	}
//	for (int i = 0; i < G->numV;i++) {
//		if (start == i) 
//			continue;
//		int min = 32767;
//		for (int j = 0; j < G->numV;j++) {
//			if (lowCost[j]&&min >lowCost[j]) {
//				min = lowCost[j];
//				k = j;
//			}
//		}
//		prims[index++] = k;
//		lowCost[k] = 0;
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j]&&G->Edge[k][j]<lowCost[j]) {
//				lowCost[j] = G->Edge[k][j];
//			}
//		}
//
//	}
//	printf("%d ",getSum(G,prims));
//	for (int i = 0; i < G->numV;i++) {
//		printf("%d ",prims[i]);
//	}
//}
//
//int main() {
//	AMGraph G;
//	void createGraphFromFile(AMGraph *);
//	void dispGraph(AMGraph *);
//	createGraphFromFile(&G);
//	dispGraph(&G);
//	prim(&G, 0);
//	return 0;
//}
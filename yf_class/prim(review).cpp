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
//int getSum(AMGraph* G, int* prims) {//�����С��������Ȩֵ
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
//void prim(AMGraph* G, int start) {
//	int* flag = (int*)malloc(sizeof(int) * G->numV);//�������
//	int* lowCost = (int*)malloc(sizeof(int) * G->numV);//ǰ������
//	int* prim = (int*)malloc(sizeof(int) * G->numV);//��������
//	int index = 0;
//	for (int i = 0; i < G->numV; i++) {//��ʼ��
//		flag[i] = 0;
//		prim[i] = 0;
//		lowCost[i] = G->Edge[start][i];
//
//	}
//	flag[start] = 1;//�׸�Ԫ�صı��Ϊ1
//	prim[index++] = start;
//	for (int i = 0; i < G->numV; i++) {//��������
//		if (start == i)//�����������Ⱦ�����ѭ��
//			continue;
//		int min = 32767;
//		int k = 0;
//		for (int j = 0; j < G->numV; j++) {//����̾���
//			if (!flag[j] && min > lowCost[j]) {
//				min = lowCost[j];
//				k = j;//��¼�ڵ�
//			}
//		}
//		flag[k] = 1;//���ýڵ���Ϊ1
//		prim[index++] = k;
//		//����
//		for (int j = 0; j < G->numV; j++) {
//			if (!flag[j] && lowCost[j] > G->Edge[k][j])//����k����������̾͸��¾���
//				lowCost[j] = G->Edge[k][j];
//			//��j��ǰ����λk
//		}
//	}
//}
//
//
//
//int main() {
//	AMGraph G;
//	void createGraphFromFile(AMGraph*);
//	void dispGraph(AMGraph*);
//	createGraphFromFile(&G);
//	dispGraph(&G);
//	prim(&G, 0);
//	return 0;
//}
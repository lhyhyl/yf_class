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
//	//������ر��� ��С�������� ���������� ��Сֵ ��¼��Сֵ�±� �����������±�
//	
//
//	//����ڵ���Ϊ������������Ԫ���
//	
//	//��ʼ����С��������
//	
//
//	//ѭ���������нڵ�
//	// 
//		//�����ǰ�ڵ��Ǵ���ڵ� �����в���
//		
//		//���������С��������Ѱ�ҵ�ǰ����ڵ�
//		
//		
//
//		//�ҵ����������������
//		
//		//����С���������Ӧλ����0�������ѷ���
//		
//		//������С��������
//		
//
//	
//}
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
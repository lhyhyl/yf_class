///*
//	Dijkstra �㷨(ͼ���ڽӱ�ʵ��)��
//				��ʵ���㷨��prim�㷨���ƣ���ͬ�Ľ����Ǹ�����һ��
//				����������Ȼ��Ҫ�õ�һ���������flag,���ڼ�¼�����Ƿ��ѱ����ʣ�һ��·������dist�����ڼ�¼
//				Ŀǰ���������ľ��룬�������ǻ���Ҫһ��ǰ�ö�������prevs�����ڴ洢·��
//
//*/
//#define MAXSIZE 100 //�������ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//#define TYPE int
//typedef struct EdgeNode {//�߱���
//	int index;//�ñ���ָ��Ķ����λ��
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӱ�
//}EdgeNode;
//
//typedef struct VertexNode {//�����ڵ�
//	char info;//������Ϣ
//	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//��������
//	int numE, numV;//������������
//}ALGraph;
//int getWeiFromAtoB(ALGraph *G, int a, int b) {//��ͼ�л�ȡa �� b�ľ��루Ȩֵ��
//	for (EdgeNode *p = G->adjlist[a].firstEdge; p; p = p->next) {
//		if (p->index == b) {//��ֱ�����ӣ�����Ȩֵ
//			return p->weight;
//		}
//	}
//	return 32767;//��û��ֱ�����ӣ��������ֵ
//}
//void dijkstra(ALGraph *G, int start) {
//
//
//
//	for (int i = 0; i < G->numV;i++) {
//		printf("%c ",G->adjlist[prevs[i]].info);
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	dijkstra(G, 0);
//	return 0;
//}
///*
//	��������
//			ÿ�ν����Ϊ0�Ķ�������������ͬʱ������ɾ����ֱ�����ж������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
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
//struct Stack
//{
//	int* arr;	//�ڴ��׵�ַ
//	int  len;	//ջ������
//	int top; 	//ջ���±�
//};
//#include <stdio.h>
//#include <stdlib.h>
//
//void inDegree(ALGraph *G,int *indegree) {//ͳ��ÿ���������ȣ������鱣��

//}
//void topoSort(ALGraph *G) {
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	Stack *createStack(int );
//	bool push(Stack *, int data);
//	bool empty(Stack *);
//	int top(Stack *);
//	bool pop(Stack *);
//	
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	topoSort(G);
//	return 0;
//}
///*
//	拓扑排序：
//			每次将入度为0的顶点输出，输出的同时将出边删除，直至所有顶点输出
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//typedef struct EdgeNode {//边表结点
//	int index;//该边所指向的顶点的位置
//	int weight;//权值
//	EdgeNode *next;//下一个邻接边
//}EdgeNode;
//
//typedef struct VertexNode {//顶点表节点
//	char info;//顶点信息
//	EdgeNode *firstEdge;//指向第一条依附该顶点的边的指针
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//顶点数组
//	int numE, numV;//边数、顶点数
//}ALGraph;
//struct Stack
//{
//	int* arr;	//内存首地址
//	int  len;	//栈的容量
//	int top; 	//栈的下标
//};
//#include <stdio.h>
//#include <stdlib.h>
//
//void inDegree(ALGraph *G,int *indegree) {//统计每个顶点的入度，用数组保存

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
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	topoSort(G);
//	return 0;
//}
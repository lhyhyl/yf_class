///*
//	写出深度优先遍历的非递归算法（图用邻接表给出）
//	分析：
//		之前我们也做过将一个递归算法利用栈用非递归的方式算出来，这里同理，我们利用栈来进行深度优先遍历
//		算法过程大致如下：从第一个顶点开始进行深度优先遍历，同时置访问位为true，然后将该顶点入栈，
//		采用while循环，依次取出栈顶元素，并判断该顶点元素是否已访问，未访问则访问，
//		已访问则查看它的firstEdge，当firstEdge也被访问了，查看next，如此循环。
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//struct Stack {//栈结构
//	int* arr;
//	int len;
//	int top;
//};
//typedef struct EdgeNode {//边表结点
//	int index;//该边所指向的顶点的位置
//	int weight;//权值
//	EdgeNode* next;//下一个邻接边
//}EdgeNode;
//
//typedef struct VertexNode {//顶点表节点
//	char info;//顶点信息
//	EdgeNode* firstEdge;//指向第一条依附该顶点的边的指针
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//顶点数组
//	int numE, numV;//边数、顶点数
//}ALGraph;
//void DFSUseStack(ALGraph* G, Stack* s) {
//	bool push(Stack*, int);
//	bool pop(Stack*);
//	int top(Stack*);
//	bool empty(Stack*);
//	int* visited = (int*)malloc(sizeof(int) * G->numV);//设置标记数组
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV;i++) {
//		if (visited[i]) {
//			continue;
//		}
//		int v;
//		push(s,i);
//		visited[i] = 1;
//		while (!empty(s)) {
//			v = top(s);
//			pop(s);
//			printf("%d ", v+1);
//			for (EdgeNode* w = G->adjlist[v].firstEdge; w; w = w->next) {
//				if (!visited[w->index]) {
//					visited[w->index]=1;
//					push(s,w->index);
//				}
//			}
//		}
//	}
//	
//}
//int main() {
//	ALGraph G;
//	void createGraphInFile(ALGraph*);
//	void dispGraph(ALGraph*);
//	createGraphInFile(&G);//创建图
//	dispGraph(&G);
//	Stack* s = (Stack*)malloc(sizeof(Stack));
//	Stack* createStack(int);
//	s = createStack(G.numV);
//	DFSUseStack(&G, s);
//	return 0;
//}
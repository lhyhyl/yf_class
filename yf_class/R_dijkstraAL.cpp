///*
//	Dijkstra 算法(图用邻接表实现)：
//				其实该算法和prim算法相似，不同的仅仅是更新那一块
//				我们这里仍然需要用到一个标记数组flag,用于记录顶点是否已被访问，一个路径数组dist，用于记录
//				目前到达各顶点的距离，此外我们还需要一个前置顶点数组prevs，用于存储路径
//
//*/
//#define MAXSIZE 100 //数组最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//#define TYPE int
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
//int getWeiFromAtoB(ALGraph *G, int a, int b) {//在图中获取a 到 b的距离（权值）
//	for (EdgeNode *p = G->adjlist[a].firstEdge; p; p = p->next) {
//		if (p->index == b) {//有直接连接，返回权值
//			return p->weight;
//		}
//	}
//	return 32767;//若没有直接连接，返回最大值
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
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	dijkstra(G, 0);
//	return 0;
//}
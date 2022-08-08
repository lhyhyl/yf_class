///*
//	Dijkstra 算法：
//				其实该算法和prim算法相似，不同的仅仅是更新那一块
//				我们这里仍然需要用到一个标记数组flag,用于记录顶点是否已被访问，一个路径数组dist，用于记录
//				目前到达各顶点的距离，此外我们还需要一个前置顶点数组prevs，用于存储路径
//
//*/
//#define MAXSIZE 100 //数组最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//};
//
//void dijkstra(AMGraph* G, int start) {
//	int* flag = (int*)malloc(sizeof(int)*G->numV);//标记数组
//	int* prevs = (int*)malloc(sizeof(int) * G->numV);//存储路径，前驱数组
//	int* dist = (int*)malloc(sizeof(int) * G->numV);//到各顶点的距离数据
//
//	for (int i = 0; i < G->numV;i++) {//初始化各数组
//		flag[i] = 0;
//		prevs[i] = 0;
//		dist[i] = G->Edge[start][i];
//	}
//
//	int k = start;//记录当前加入的顶点
//	flag[k] = 1;
//	for (int i = 0; i < G->numV; i++) {
//		if (i == k)
//			continue;
//		int min = 32767;
//		for (int j = 0; j < G->numV;j++) {
//			if (!flag[j] && min > dist[j]) {
//				min = dist[j];
//				k = j;//记录当前节点
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
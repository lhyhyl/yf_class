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
//	int* flag = (int*)malloc(sizeof(int) * G->numV);//标记数组
//	int* prevs = (int*)malloc(sizeof(int) * G->numV);//前驱数组
//	int* dist = (int*)malloc(sizeof(int) * G->numV);//距离数组
//	for (int i = 0; i < G->numV; i++) {//初始化
//		flag[i] = 0;
//		prevs[i] = 0;
//		dist[i] = G->Edge[start][i];
//
//	}
//	flag[start] = 1;//首个元素的标记为1
//	for (int i = 0; i < G->numV; i++) {//遍历顶点
//		if (start == i)//如果和自身相等就跳出循环
//			continue;
//		int min = 32767;
//		int k = 0;
//		for (int j = 0; j < G->numV; j++) {//找最短距离
//			if (!flag[j]&&min > dist[j]) {
//				min = dist[j];
//				k = j;//记录节点
//			}
//		}
//		flag[k] = 1;//将该节点标记为1
//		for (int j = 0; j < G->numV; j++) {
//			if (!flag[j] && dist[j] > dist[k] + G->Edge[k][j]) {//加入k后如果距离变短就更新距离
//				dist[j] = dist[k] + G->Edge[k][j];
//				prevs[j] = k;//将j的前驱置位k
//			}
//		}
//	}
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
///*
//	prim算法在用邻接矩阵方式存储的图中的实现
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100 //数组最大值
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	char Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//};
//
//int getSum(AMGraph *G, int *prims) {//获得最小生成树的权值
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (G->Edge[prims[j]][prims[i]] < min) {
//				min = G->Edge[prims[j]][prims[i]];//疯了，把prims[j]写成了j，害我调试了好久！！！
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void prim(AMGraph *G, int start) {
//	
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
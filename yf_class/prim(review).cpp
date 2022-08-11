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
//int getSum(AMGraph* G, int* prims) {//获得最小生成树的权值
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
//void prim(AMGraph* G, int start) {
//	int* flag = (int*)malloc(sizeof(int) * G->numV);//标记数组
//	int* lowCost = (int*)malloc(sizeof(int) * G->numV);//前驱数组
//	int* prim = (int*)malloc(sizeof(int) * G->numV);//距离数组
//	int index = 0;
//	for (int i = 0; i < G->numV; i++) {//初始化
//		flag[i] = 0;
//		prim[i] = 0;
//		lowCost[i] = G->Edge[start][i];
//
//	}
//	flag[start] = 1;//首个元素的标记为1
//	prim[index++] = start;
//	for (int i = 0; i < G->numV; i++) {//遍历顶点
//		if (start == i)//如果和自身相等就跳出循环
//			continue;
//		int min = 32767;
//		int k = 0;
//		for (int j = 0; j < G->numV; j++) {//找最短距离
//			if (!flag[j] && min > lowCost[j]) {
//				min = lowCost[j];
//				k = j;//记录节点
//			}
//		}
//		flag[k] = 1;//将该节点标记为1
//		prim[index++] = k;
//		//更新
//		for (int j = 0; j < G->numV; j++) {
//			if (!flag[j] && lowCost[j] > G->Edge[k][j])//加入k后如果距离变短就更新距离
//				lowCost[j] = G->Edge[k][j];
//			//将j的前驱置位k
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
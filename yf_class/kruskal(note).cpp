///*
//	kruskal 算法：每次选择最短的一条边加入集合，直至所有顶点被包含，而且会用到并查集
//*/
//#include<stdio.h>
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
//struct Tree {
//	char data;
//	struct Tree *lchild, *rchild;
//};
//void outPut(ALGraph *G, int **weights) {//输出最小生成树
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j] != 0) {
//				printf("%c->%c(%d)\n", G->adjlist[i].info, G->adjlist[j].info, weights[i][j]);
//			}
//		}
//	}
//}
//int findAnster(int *fa, int i) {
//	if (fa[i] == i)return i;//找到返回
//	else {
//		fa[i] = findAnster(fa, fa[i]);//进行路径压缩,即将i处
//		return fa[i];//未找到继续
//	}
//}
//void unionn(int *fa, int i, int j) {
//	int i_a = findAnster(fa, i);
//	int j_a = findAnster(fa, j);
//	fa[i_a] = j_a;//i的祖先指向j的祖先
//}
//void kruskal(ALGraph *G) {
//	//定义结果数组与并查集数组
//	
//
//	//初始化结果数组与并查集数组
//	
//	//定义一个变量代表边数，用于判断说是否完成生成树
//	
//
//	//循环遍历
//	
//		//定义权值变量(用于记录当前最小权值)，起点和终点
//		
//		//遍历寻找最小权值边
//	
//			//遍历当前顶点的所有临边
//			
//				//如果该边权值小于当前weight并且两端点相连不会形成环，则更新最小权值
//			
//					//更新最小权值边
//				
//					//记录起点
//					
//					//记录终点
//					
//			
//		
//	
//		//当前边存入结果数组
//		
//		//合并两顶点，及拥有共同祖先，目的在于之后的判断不会连接他两
//		
//		//新加入了一条边，边数加一
//		
//	
//	//将结果数组输出
//	
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	kruskal(G);
//	return 0;
//}
///*
//	kruskal �㷨��ÿ��ѡ����̵�һ���߼��뼯�ϣ�ֱ�����ж��㱻���������һ��õ����鼯
//*/
//#include<stdio.h>
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
//struct Tree {
//	char data;
//	struct Tree *lchild, *rchild;
//};
//void outPut(ALGraph *G, int **weights) {//�����С������
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j] != 0) {
//				printf("%c->%c(%d)\n", G->adjlist[i].info, G->adjlist[j].info, weights[i][j]);
//			}
//		}
//	}
//}
//int findAnster(int *fa, int i) {
//	if (fa[i] == i)return i;//�ҵ�����
//	else {
//		fa[i] = findAnster(fa, fa[i]);//����·��ѹ��,����i��
//		return fa[i];//δ�ҵ�����
//	}
//}
//void unionn(int *fa, int i, int j) {
//	int i_a = findAnster(fa, i);
//	int j_a = findAnster(fa, j);
//	fa[i_a] = j_a;//i������ָ��j������
//}
//void kruskal(ALGraph *G) {
//	//�����������벢�鼯����
//	
//
//	//��ʼ����������벢�鼯����
//	
//	//����һ��������������������ж�˵�Ƿ����������
//	
//
//	//ѭ������
//	
//		//����Ȩֵ����(���ڼ�¼��ǰ��СȨֵ)�������յ�
//		
//		//����Ѱ����СȨֵ��
//	
//			//������ǰ����������ٱ�
//			
//				//����ñ�ȨֵС�ڵ�ǰweight�������˵����������γɻ����������СȨֵ
//			
//					//������СȨֵ��
//				
//					//��¼���
//					
//					//��¼�յ�
//					
//			
//		
//	
//		//��ǰ�ߴ���������
//		
//		//�ϲ������㣬��ӵ�й�ͬ���ȣ�Ŀ������֮����жϲ�����������
//		
//		//�¼�����һ���ߣ�������һ
//		
//	
//	//������������
//	
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	kruskal(G);
//	return 0;
//}
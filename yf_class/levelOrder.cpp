///*
//	�Ը��������������¶��ϡ����ҵ���Ĳ�α����㷨
//	������
//		����ֻ��Ҫ�ڲ�α����Ļ����ϼ���ջ��ʹ�ã�����ÿ�γ��Ӻ�����ݽ�����ջ�����п���ʱ����ȥ���η���ջ��Ԫ�أ����ɴﵽҪ��
//
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Squeue {
//	biTree *arr;
//	int front, rear;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void levelOrder(biTree *T, Squeue *sq, int maxSize) {
//	Stack *s = (Stack *)malloc(sizeof(Stack));
//	biTree *p = T;
//	biTree *r = (biTree *)malloc(sizeof(biTree));
//	bool enQueue(Squeue *, biTree *, int);
//	bool isEmpty(Squeue *);
//	bool deQueue(Squeue *, biTree **, int);
//
//}
//int main() {
//	int count = 0;
//	biTree *T = ( biTree *)malloc(sizeof( biTree));
//	Squeue *sq = ( Squeue *)malloc(sizeof( Squeue));
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *, int *);
//
//	Squeue *createQueue(int);
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T, &count);//ͳ�ƶ������ڵ����
//	sq = createQueue(count);
//
//	levelOrder(T, sq, count);
//	return 0;
//}
///*
//	������������ö�������洢�ṹ�����һ���ǵݹ��㷨��������ĸ߶�
//	������
//		��Ҫ���÷ǵݹ�ķ�ʽ����ö������ĸ߶ȣ����ǲ��ò�α���������ʵģ���Ϊ��һ��һ��Ĳ��ͺܺ��������������ʵ�֣�
//		����Ψһ���ѵ������������ε�֪�߶ȸü�һ�ˣ����ǿ�������һ����־num������¼ÿһ����ջ�Ľڵ�����������ǳ�ջ��
//		�ﵽ����ֵʱҲ����ζ�����ǵĸ߶ȸü�һ��
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Squeue {
//	biTree *arr;
//	int front, rear;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getHigh(biTree *T,Squeue *sq,int maxSize) {
//	initQueue;
//	int next = 0;
//	int cur = 1;
//	int hight=0;
//	if (!T) {
//		return 0;
//	}
//	enQueue(sq, T);
//	while (!isEmpty(sq) {
//		p=deQueue(sq);
//		cur--;
//		if (p->lchild) {
//			enQueue(sq, p->lchild);
//			next++;
//			
//		}
//		if (p->rchild) {
//			enQueue(sq, p->rchild);
//			next++;
//				
//		}
//		if (cur == 0) {
//			hight++;
//			cur = next;
//			next = 0;
//		}
//	}
//}
//int main() {
//	int count=0;
//	//����������������
//	biTree *T=(biTree *)malloc(sizeof(biTree));
//	Squeue *sq;
//	biTree *create(biTree *);
//	void nodeNum(biTree *,int *);
//	Squeue *createQueue(int);
//	T = create(T);
//	nodeNum(T,&count);
//	sq = createQueue(count);//����һ����СΪ���ڵ�����Ķ���
//
//	printf("�ö������ĸ߶�Ϊ��%d",getHigh(T, sq, count));
//	return 0;
//}
///*
//	һ�Ŷ������Զ����������ʽ�洢����дһ���㷨�ж����Ƿ���һ����ȫ������
//	������
//		������Ȼ���Խ����������������£���������Ϊ���������ν����������ϵ��£���������ջ�������սڵ㣬�����սڵ㣬
//		�����зǿգ����ж�����Ƿ񻹴��ڽڵ㣬���У������Ϊ����ȫ��������
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Squeue {
//	biTree data;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//bool isComplete(biTree *T, Squeue *sq, int maxSize) {
//	if (!T) return true;
//	bool enQueue(Squeue * sq, biTree *data, int maxSize);
//	bool deQueue(Squeue * sq, biTree ** data, int maxSize);
//	bool isEmpty(Squeue * sq);
//	biTree* r = (biTree*)malloc(sizeof(biTree));
//	enQueue(sq,T, maxSize);//���
//
//	while (!isEmpty(sq)) {//������в���
//		//������׽ڵ㸳ֵ��r
//		deQueue(sq,&r,maxSize);
//		if (r) {
//			enQueue(sq,T->lchild,maxSize);
//			enQueue(sq,T->rchild,maxSize);
//		}
//		else {
//			while (!isEmpty(sq)) {
//				deQueue(sq, &r,maxSize);
//				if (r) {
//					return false;
//				}
//			}
//		}
//	}
//	return true;
//}
//int main() {
//	int count = 0;
//	bool isCom;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	struct Squeue *sq;
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *, int *);
//
//	Squeue *createQueue(int);
//
//
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T, &count);//ͳ�ƶ������ڵ�����
//	sq = createQueue(count);//��������Ϊ�������ڵ������С�Ķ���
//
//	isCom = isComplete(T, sq, count);
//	isCom ? printf("�ö���������ȫ������") : printf("�ö�����������ȫ������");
//	return 0;
//}
///*
//	�Ա�дһ���㷨��һ�Ŷ����������нڵ�������������н�����
//	������
//		������Ȼ���Բ��õݹ�ķ�ʽ���н���
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void swapTree(biTree *T) {//�䱾�ʾ��Ǵ�Ҷ�ӽڵ㿪ʼ���н�����һ·�ƽ������ڵ�
//	biTree* t;
//	if (!T) return;
//	if (!T->rchild && !T->rchild) return;
//	else {
//		swapTree(T->lchild);
//		swapTree(T->rchild);
//		t = T->lchild;
//		T->lchild = T->rchild;
//		T->rchild = t;
//	}
//}
//int main() {
//	int num;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//����һ�Ŷ�����
//	inOrder(T);
//	printf("\n");
//	swapTree(T);
//	inOrder(T);
//	return 0;
//}
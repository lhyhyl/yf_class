///*
//	������ж����ζ������Ƿ����Ƶ��㷨����ν������T1��T2���ƣ�ָ����T1��T2���ǿյĶ�������ֻ��һ�����ڵ㣻���������������
//	������������
//	������
//		���͵�Ҫ��ȡ�ݹ�������
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#include <stdlib.h>
//#include <stdio.h>
//bool isSimilar(biTree *T1, biTree *T2) {
//	if (!T1 && !T2) return true;
//	else if (!T1||!T2) return false;//��һ��Ϊ��
//	else if (isSimilar(T1->lchild, T2->lchild) && isSimilar(T1->rchild, T2->rchild)) return true;
//	else return false;
//}
//int main() {
//	biTree* T1 = (biTree*)malloc(sizeof(biTree));
//	biTree* T2 = (biTree*)malloc(sizeof(biTree));
//
//	biTree *create(biTree *);
//	printf("��һ�������ݣ�\n");
//
//	T1 = create(T1);
//	printf("\n");
//	printf("�ڶ��������ݣ�\n");
//	T2 = create(T2);
//
//	isSimilar(T1, T2) ? printf("����") : printf("������");
//	return 0;
//}
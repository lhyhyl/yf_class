///*
//	���ö�����������˼���дһ���ж϶������Ƿ��Ƕ���ƽ�������㷨
//	������
//		���ǿ��Բ�ȡ�����������ɸ��㷨����Ϊ����������Ậ���ظ����㡣
//		���Ƕ�ÿһ���ڵ�����жϣ��������������ƽ�������������߶Ȳ�С�ڵ���1����ýڵ�ƽ��
//
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//bool isAVL(biTree *T, int *depth) {
//	/*if (!T) {
//		depth = 0;
//		return true;
//	}
//	else if (!T->lchild && !T->rchild)
//	{
//		*depth = 1;
//		return true;
//	}
//	else {
//		int ldepth=0 ,rdepth = 0;
//		if (isAVL(T->lchild, &ldepth) && isAVL(T->rchild, &rdepth)) {
//
//			*depth = (ldepth > rdepth ? ldepth + 1 : rdepth + 1);
//			if (abs(rdepth - ldepth) >= 2)
//				return false;
//			else {
//				return true;
//			}
//		}
//		return false;
//	}*/
//
//	//�����ǰ�ڵ�Ϊ�գ�����true�����ҵ�ǰ�ڵ�ĸ߶�Ϊ0
//	if (!T) {
//		*depth = 0;
//		return true;
//	}
//	//�ж������������������Ƿ�ƽ��  
//	int left = 0, right = 0;
//	if (isAVL(T->lchild,&left)&& isAVL(T->rchild, &right)) {
//		//�ж����������߶Ȳ��Ƿ�<=1
//		int diff = left - right;
//		*depth = left > right ? left + 1 : right + 1;
//		if (abs(diff)<=1) {
//			//ƽ��
//			return true;
//		}
//
//	}
//	//�߶Ȳ�>1 ��ƽ��
//	//����������������ƽ�⣬���岻ƽ��
//	return false;
//		
//}
//int main() {
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	biTree* create(biTree*);
//	T = create(T);//����һ�Ŷ�����
//	int depth = 0;
//	isAVL(T, &depth) ? printf("�Ƕ���ƽ����"):printf("���Ƕ���ƽ����");
//	return 0;
//}
///*
//	利用二叉树遍历的思想编写一个判断二叉树是否是二叉平衡树的算法
//	分析：
//		我们可以采取后序遍历来完成该算法，因为后序遍历不会含有重复计算。
//		我们对每一个节点进行判断，如果左右子树均平衡且左右子树高度差小于等于1，则该节点平衡
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
//	//如果当前节点为空，返回true，并且当前节点的高度为0
//	if (!T) {
//		*depth = 0;
//		return true;
//	}
//	//判断左子树及其右子树是否平衡  
//	int left = 0, right = 0;
//	if (isAVL(T->lchild,&left)&& isAVL(T->rchild, &right)) {
//		//判断左右子树高度差是否<=1
//		int diff = left - right;
//		*depth = left > right ? left + 1 : right + 1;
//		if (abs(diff)<=1) {
//			//平衡
//			return true;
//		}
//
//	}
//	//高度差>1 不平衡
//	//左子树或右子树不平衡，整体不平衡
//	return false;
//		
//}
//int main() {
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	biTree* create(biTree*);
//	T = create(T);//创建一颗二叉树
//	int depth = 0;
//	isAVL(T, &depth) ? printf("是二叉平衡树"):printf("不是二叉平衡树");
//	return 0;
//}
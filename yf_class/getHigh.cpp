///*
//	采用递归的方式求二叉树的高度
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild, *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//int getHigh(biTree *T) {
//	if (!T) return 0;
//	int ldepth = getHigh(T->lchild);
//	int rdepth = getHigh(T->rchild);
//	int depth = ldepth > rdepth ? ldepth + 1 : rdepth + 1;
//	return depth;
//}
//int main() {
//	struct biTree *T = (biTree *)malloc(sizeof(biTree));
//	biTree *create(biTree *);
//	T = create(T);
//	printf("%d",getHigh(T));
//
//	return 0;
//}
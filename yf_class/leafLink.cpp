///*
//	设计一个算法将二叉树的叶节点按从左到右的顺序连成一个单链表，表头指针为head。二叉树按二叉链表方式存储，连接时用叶节点的
//	右指针来存放单链表指针。
//	分析：
//		我们要将叶节点连起来，那么我们首先要按从左至右的顺序找出叶节点，要满足这样的出场顺序，可以采用先序，中序，后序，
//		这里我们采用中序遍历。
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//biTree *h = ( biTree *)malloc(sizeof( biTree));//创建一个头结点
//biTree *head = h;
//biTree* r=h;
//biTree *leafLink(biTree *T) {//将二叉树b中的所有叶子结点连起来
//	if (T) {
//		leafLink(T->lchild);
//		leafLink(T->rchild);
//		if (!T->lchild&&!T->rchild) {
//			r->rchild = T;
//			r = T;
//		}
//	}
//	r->rchild = NULL;
//	return head;
//}
//int main() {
//	biTree *b = (biTree *)malloc(sizeof(biTree ));
//	biTree *create(biTree *);
//	b = create(b);//创建一颗二叉树
//	leafLink(b);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}
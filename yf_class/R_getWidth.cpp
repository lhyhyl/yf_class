///*
//	假设二叉树采用二叉链表存储结构，设计一个算法，求非空二叉树的宽度（即具有节点数最多的那一层的节点个数）
//	分析：
//		这道题和求高度那道题大同小异。我们仍然可以采取层次遍历，统计每一层的节点个数，找到宽度最大的那一层。
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//
//};
//struct LinkQueue {//上次求高度采用的是顺序队列，这次采用链式队列，雨露均沾哈哈
//	struct Link *front, *rear;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getWidth(biTree *b, LinkQueue *lq) {
//	bool enQueue(LinkQueue * lq, biTree * node);
//	bool deQueue(LinkQueue * lq, biTree * *node);
//	bool isEmpty(LinkQueue * lq);
//	biTree* p = b;
//	biTree* r = (biTree*)malloc(sizeof(biTree));
//
//	if (!p)
//		return 0;
//	enQueue(lq, p);
//	int cur = 1;
//	int width = cur;
//	int next = 0;
//	while (!isEmpty(lq)) {
//		deQueue(lq, &r);
//	    cur--;
//		if (r->lchild)
//		{
//			enQueue(lq, r->lchild);
//			next++;
//		}
//		if (r->rchild)
//		{
//			enQueue(lq, r->rchild);
//			next++;
//		}
//		if (cur == 0) {
//			if (width < next)
//				width = next;
//		}
//	}
//	return width;
//
//}
//int main() {
//	struct biTree *b = (struct biTree*)malloc(sizeof(struct biTree));
//	struct LinkQueue *lq;
//
//	biTree *create(biTree *);
//	b = create(b);//创建一颗二叉树
//
//	LinkQueue *create();
//	lq = create();//创建链式队列
//
//	printf("该二叉树的宽度为：%d",getWidth(b, lq));
//	return 0;
//}
///*
//	������������ö�������洢�ṹ�����һ���㷨����ǿն������Ŀ�ȣ������нڵ���������һ��Ľڵ������
//	������
//		��������߶��ǵ����ͬС�졣������Ȼ���Բ�ȡ��α�����ͳ��ÿһ��Ľڵ�������ҵ����������һ�㡣
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//
//};
//struct LinkQueue {//�ϴ���߶Ȳ��õ���˳����У���β�����ʽ���У���¶��մ����
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
//	b = create(b);//����һ�Ŷ�����
//
//	LinkQueue *create();
//	lq = create();//������ʽ����
//
//	printf("�ö������Ŀ��Ϊ��%d",getWidth(b, lq));
//	return 0;
//}
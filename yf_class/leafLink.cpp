///*
//	���һ���㷨����������Ҷ�ڵ㰴�����ҵ�˳������һ����������ͷָ��Ϊhead������������������ʽ�洢������ʱ��Ҷ�ڵ��
//	��ָ������ŵ�����ָ�롣
//	������
//		����Ҫ��Ҷ�ڵ�����������ô��������Ҫ���������ҵ�˳���ҳ�Ҷ�ڵ㣬Ҫ���������ĳ���˳�򣬿��Բ����������򣬺���
//		�������ǲ������������
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
//biTree *h = ( biTree *)malloc(sizeof( biTree));//����һ��ͷ���
//biTree *head = h;
//biTree* r=h;
//biTree *leafLink(biTree *T) {//��������b�е�����Ҷ�ӽ��������
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
//	struct biTree *b = (struct biTree *)malloc(sizeof(struct biTree ));
//	biTree *create(biTree *);
//	b = create(b);//����һ�Ŷ�����
//	leafLink(b);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}
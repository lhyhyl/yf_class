///*
//		��A��B��������������ͷ��㣩������Ԫ�ص����������һ���㷨��A��B�еĹ���Ԫ�ز���������C��Ҫ���ƻ�A��B�ڵ�
//		������
//			Ҫ���ƻ�A��B�ڵ㣬��������Ҫ���´�������ڵ�ռ䣬���������ӡ�ΪѰ�ҹ���Ԫ�أ�ÿ����A�е�һ��Ԫ�أ���ȥ
//			��B��Ԫ��һһ�Ƚϣ�ͬ��ȡֵ����һ�ռ�ڵ㣬���ӵ�C�ϡ�ʱ�临�Ӷ�ΪO(n^2)��
//			��Ϊ�����������ǵ�������ģ���ô���ǿ�����������ָ��ͬ���Ƚϣ���ͬ�����c����ͬС���Ǹ������ƣ�ֱ��������ĩβ
//			������ʱ�临�Ӷ�ΪO(n).
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void linkCommon1(Link *a, Link *b, Link *c ) {
//	
//}
//void linkCommon2(Link *a,Link *b,Link *c) {
//	Link* lc = c, * la = a->next, * lb = b->next;//ָ������ָ��
//	while (la && lb) {//��������
//		if (la->data == lb->data) {
//			Link* newP = (Link*)malloc(sizeof(Link));
//			newP->data = la->data;
//			newP->next = NULL;
//			lc->next = newP;
//			lc = newP;
//			la = la->next;
//			lb = lb->next;
//
//		}
//		else {
//			la->data > lb->data ? lb = lb->next : la = la->next;
//		}
//	}
//}
//int main() {
//	struct Link *a, *b;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	a = createLink(0);
//	b = createLink(0);
//	struct Link *c = (struct Link*)malloc(sizeof(struct Link));
//	c->next = NULL;
//	//linkCommon(a,b,c);
//	linkCommon2(a,b,c);
//	c = c->next;
//	while (c) {
//		printf("%d " ,c->data);
//		c = c->next;
//	}
//	//printfNowLink(c);
//	return 0;
//}
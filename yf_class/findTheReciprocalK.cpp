///*
//	��һ����ͷ���ĵ��������һ�������ҵ�ָ���ĵ�����k���ڵ㣬����ڵ�ֵ��������1�����򷵻�0��ǰ�᲻�ܸı����������ܸ�Ч
//
//	������
//		���ǿ�����ͳ�Ƴ��ܹ��Ľڵ���count����ô�ýڵ��˳����num=count-k+1,����+1����Ϊ�ұ���Ľڵ�ҲӦ�ð�������Ȼ���k>count,ֱ�ӷ���0��ʱ�临�Ӷ�ΪO(n)
//		���ﻹ����һ�ָ��ӱ�ݵķ�����ֻ����������һ�Σ�������������ָ�룬�ʼ��ָ���׽ڵ㣬Ȼ����q���ƶ�k���ڵ㣬֮��p
//		qͬ���ƶ�����qΪNULLʱ��p���ڵ�λ�ñ��ǵ�����k���ڵ��λ��
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////int findTheReciprocalK(Link *h,int k) {//���ǵ�һ�ֽⷨ
////	
////}
//int findTheReciprocalK2(Link *h,int k) {//���ǵڶ��ֽⷨ
//	Link* p = h->next, * q = h->next;
//	int count = k;
//	while (count)
//	{
//		if (!q) {
//			return 0;
//		}
//		q = q->next;
//		count--;
//	}
//	while (q) {
//		q = q->next;
//		p = p->next;
//	}
//	printf("%d ",p->data);
//	return 1;
//}
//int main() {
//	int k;
//	struct Link *head;
//	Link *createLink(int);
//	head = createLink(0);
//	printf("������Ҫ�鵹���ڼ�������k=");
//	scanf("%d",&k);
//	//findTheReciprocalK(head,k);
//	findTheReciprocalK2(head, k);
//
//	return 0;
//}
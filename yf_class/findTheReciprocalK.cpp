///*
//	有一个带头结点的单链表，设计一个函数找到指定的倒数第k个节点，输出节点值，并返回1，否则返回0，前提不能改变链表，尽可能高效
//
//	分析：
//		我们可以先统计出总共的节点数count，那么该节点的顺序数num=count-k+1,这里+1是因为我本身的节点也应该包含。当然如果k>count,直接返回0，时间复杂度为O(n)
//		这里还有另一种更加便捷的方法，只需对链表遍历一次，我们设立两个指针，最开始均指向首节点，然后让q先移动k个节点，之后p
//		q同步移动，当q为NULL时，p所在的位置便是倒数第k个节点的位置
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////int findTheReciprocalK(Link *h,int k) {//这是第一种解法
////	
////}
//int findTheReciprocalK2(Link *h,int k) {//这是第二种解法
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
//	printf("请输入要查倒数第几个数：k=");
//	scanf("%d",&k);
//	//findTheReciprocalK(head,k);
//	findTheReciprocalK2(head, k);
//
//	return 0;
//}
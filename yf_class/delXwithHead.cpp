///*
//	在带头结点的单链表L中,删除所有值为X的节点，并释放其空间，假设值为X的节点不唯一
//	分析：
//		和上题相似，只是多了一个头结点。
//*/
//struct Link {
//
//	int data;
//	struct Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void deleteX(Link *head,int delNum) {
//	//创建两个指针，pre p
//	Link* pre = head;
//	Link* p = head->next;
//	Link* r;
//	while (p) {
//		if (p->data == delNum) {
//			r = p;
//			p = p->next;
//			pre->next = p;
//			free(r);
//		}
//		else {
//			pre = p;
//			p = p->next;
//		}
//	}
//
//}
//
//int main() {
//	//创建节点
//	Link *head = (Link*)malloc(sizeof(Link));
//	Link *q = (Link*)malloc(sizeof(Link));
//	q = head;
//	head->next = NULL;
//	int n,data,delNum;
//	printf("请输入节点个数：");
//	scanf("%d",&n);
//	for (int i = 0; i < n;i++) {
//		printf("请输入第%d个节点值：",i+1);
//		Link *p = (Link*)malloc(sizeof(Link));
//		scanf("%d",&data);
//		p->data = data;
//		head->next = p;
//		head = p;
//	
//	}
//	head->next = NULL;//这里要将指针的next指向NULL，不然后面的判断会出问题，而且这也是应该养成的好习惯
//	head = q;//head回到头结点
//	printf("当前链表值为：");
//	while (head->next) {
//		printf("%d ",head->next->data);
//		head = head->next;
//	}
//	printf("\n");
//	printf("请输入要删除的值：");
//	scanf("%d",&delNum);
//	head = q;//head回到头结点
//	deleteX(head,delNum);
//	printf("删除后链表值为：");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}
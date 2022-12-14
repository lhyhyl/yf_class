/*
	此文件用于创建一个顺序队列，出队，入队,判断队空，判断队满等操作
*/
#include <stdio.h>
#include <stdlib.h>
//#define TYPE biTree* 
//#define TYPE char
#define TYPE int

struct biTree {
	char data;
	struct biTree* lchild;
	struct biTree* rchild;
};
struct Squeue {
	TYPE* arr;
	int front, rear;
};
//创建队列
Squeue* createQueue(int n) {
	Squeue* sq = (Squeue*)malloc(sizeof(Squeue));
	sq->arr = (TYPE*)malloc(sizeof(TYPE) * n);//数组大小
	sq->front = 0;
	sq->rear = 0;
	return sq;
}
//判断队满(这里采用牺牲一个存储单元来实现,约定队头指针在队尾指针的下一个位置作为队满的标志)
bool isFull(Squeue* sq, int maxSize) {
	return (sq->rear + 1) % maxSize == sq->front;
}
//判断队空
bool isEmpty(Squeue* sq) {
	return sq->front == sq->rear;
}
//判断队列中元素个数
int count(Squeue* sq, int maxSize) {
	return (sq->rear - sq->front + maxSize) % maxSize;
}
//入队
bool enQueue(Squeue* sq, TYPE data, int maxSize) {
	if (isFull(sq, maxSize)) return false;
	sq->arr[sq->rear] = data;
	sq->rear = (sq->rear + 1) % maxSize;
	return true;
}

//出队
bool deQueue(Squeue* sq, TYPE* data, int maxSize) {
	if (isEmpty(sq)) return false;
	*data = sq->arr[sq->front];
	sq->front = (sq->front + 1) % maxSize;
	return true;
}

//打印队列中元素
//void printQ(Squeue *sq,int maxSize) {
//	if (isEmpty(sq)) return ;
//	int np = sq->front;
//	while (np!=sq->rear) {
//		printf("%d ",sq->arr[np]);
//		np = (np + 1) % maxSize;
//	}
//}

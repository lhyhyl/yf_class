///*
//	�ڶ������в���ֵΪx�Ľڵ㣬�Ա�д�㷨��ӡֵΪx�Ľڵ���������ȣ�����x��ֵ������һ����
//	������
//		�������ǲ��ú���������ǵݹ飩����Ϊ����������x֮ǰ���ǻ���������Ƚڵ�ȫ����ջ���������ҵ�xʱ��������ȡ��ջ��Ԫ��
//*/
//struct biTree {
//	char data;
//	struct biTree* lchild;
//	struct biTree* rchild;
//};
//struct Stack {
//	biTree* arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void findAllAncestor(biTree* T, Stack* s, char x) {
//	biTree* p = T;
//	biTree* r = (biTree*)malloc(sizeof(biTree));
//	biTree* tp = (biTree*)malloc(sizeof(biTree));
//
//	bool push(Stack*, biTree*);
//	bool pop(Stack*);
//	biTree* top(Stack*);//���ص���һ��ָ��
//	bool empty(Stack*);
//	while (p || !empty(s)) {
//		if (p) {//һ·������ջ
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			if (p->rchild && r != p->rchild)
//				p = p->rchild;
//			else {
//				pop(s);
//				//���ʽڵ�
//				if (p->data == x) {
//					while (!empty(s)) {
//						tp = top(s);
//						printf("%c ", tp->data);
//						pop(s);//ɾ��ջ��Ԫ��
//					}
//				}
//				r = p;
//				p = NULL;
//			}
//		}
//	}
//
//}
//int main() {
//	int count = 0, x;
//	struct biTree* T = (struct biTree*)malloc(sizeof(struct biTree));
//	struct Stack* s;
//
//	biTree* create(biTree*);
//	void nodeNum(biTree*, int*);
//
//	Stack* createStack(int);
//
//	T = create(T);
//	nodeNum(T, &count);
//	s = createStack(count);
//	printf("������Ҫ���ҵ�Ԫ�أ�x=");
//	x = getchar();
//	findAllAncestor(T, s, x);
//	return 0;
//}
///*哈夫曼树及哈夫曼编码实现*/
//
//# include<stdio.h>
//# include<malloc.h>
//# include<string.h>
//# define N 30						//叶子结点的最大值
//# define M 2 * N - 1				//所有结点的最大值
//# define MAX 99999
//
///*哈夫曼树的类型定义*/
//typedef struct {
//	int weight;						//结点的权值
//	int parent;						//双亲的下标
//	int LChild;						//左孩子结点的下标
//	int RChild;						//右孩子结点的下标
//}HTNode, HuffmanTree[M + 1];		//HuffmanTree是一个结构数组类型，0号单元不用
//
//HuffmanTree ht;
//
///*在ht[1]至ht[n]的范围内选择两个parent为0且weight最小的结点，其序号分别赋给s1，s2*/
//void Select(HuffmanTree ht, int n, int* s1, int* s2) {
//	//设置变量最小值min1和次小值min2
//	int min1 = MAX, min2 = MAX;
//	//序号初始化为0
//	*s1 = 0;*s2 = 0;
//	//遍历寻找最小值和次小值
//	for (int i = 1; i <= n; i++) {
//		//前提条件，parent指针为0，代表该数字未被选择
//		if (ht[i].parent == 0) {
//			//比较，替换
//			if (ht[i].weight < min1) {
//				min2 = min1;
//				*s2 = *s1;
//				min1 = ht[i].weight;
//				*s1 = i;
//			}
//			else if (ht[i].weight < min2) {
//				min2 = ht[i].weight;
//				*s2 = i;
//			}
//		}
//	}
//}
//
///*创建哈夫曼树算法*/
//void CrtHuffmanTree(HuffmanTree ht, int w[], int n) {
//	//构造哈夫曼树ht[M+1],w[]存放n个权值
//	// 
//	//1至n号单元存放叶子结点，初始化
//	for (int i = 1; i <= n; i++) {
//		ht[i].weight = w[i];
//		ht[i].parent = 0;
//		ht[i].RChild = 0;
//		ht[i].LChild = 0;
//	}
//	//所有结点总数
//	// 
//	//n+1至m号单元存放非叶结点，初始化
//	for (int i = n + 1; i <= 2 * n - 1; i++) {
//		ht[i].weight = 0;
//		ht[i].parent = 0;
//		ht[i].RChild = 0;
//		ht[i].LChild = 0;
//	}
//
//	/*初始化完毕，开始创建非叶结点*/
//	//当前最小两值的序号
//	int s1, s2;
//	for (int i = n + 1; i < 2 * n - 1; i++) {
//		Select(ht, i - 1, &s1, &s2);
//		ht[i].weight = ht[s1].weight + ht[s1].weight;
//		ht[s1].parent = i;
//		ht[s2].parent = i;
//		ht[i].LChild = s1;
//		ht[i].RChild = s2;
//	}
//	//创建非叶结点，建哈夫曼树
//	
//		//在ht[1]至ht[i-1]的范围内选择两个parent为0且weight最小的结点，其序号分别赋给s1，s2
//	
//		//权值相加
//		
//		//设置父亲节点
//		
//		//设置父亲节点的左右孩子
//		
//	
//}
//
///*哈夫曼编码*/
//void CrtHuffmanCode(HuffmanTree ht, int n, char str[]) {
//	//从叶子结点到根，逆向求每个叶子结点(共n个)对应的哈夫曼编码
//	//创建字符变量用于保存编码
//	char* c;
//	//分配当前编码的工作空间
//	c = (char*)malloc(sizeof(char) * n);
//	//求n个叶子结点对应的哈夫曼编码
//	for (int i = 1; i <= n; i++) {
//		int start = n - 1; int cur = i;int  p = ht[i].parent;
//		while (!p) {
//			--start;
//			if (ht[p].LChild == cur)
//				c[start] = '0';
//			else c[start] = '1';
//			cur = p;
//			p = ht[p].parent;
//		}
//		printf("%c的编码：", str[i - 1]);
//		for (int j = 0; j < n; j++) {
//			if (c[j] == '0' || c[j] == '1') {
//				printf("%c", c[j]);		//编码输出
//			}
//		}
//		printf("\n");
//		memset(c, -1, n);//将cd初始化
//	}
//		//定义变量从后往前存储，定义当前初始叶节点，一路向上进行判断
//		
//		//如果父亲节点存在
//		
//			//将start移到最后一位字符处
//			
//			//判断当前节点是其父亲节点的左孩子
//			
//				//左分支标0
//			
//
//				//右分支标1
//					
//			//向上倒堆
//		
//
//
//
//	//输出编码
//		
//	
//}
//
//int main() {
//	int i, w[5] = { 2,3,5,7,8 };
//	char str[5] = { 'c','s','e','a','t' };
//	CrtHuffmanTree(ht, w, 5);
//	printf("哈夫曼树各结点值：\n");
//	for (i = 1; i <= 9; i++)
//		printf("%d ", ht[i].weight);
//	printf("\n");
//	CrtHuffmanCode(ht, 5, str);
//	return 0;
//}

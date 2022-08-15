///*��������������������ʵ��*/
//
//# include<stdio.h>
//# include<malloc.h>
//# include<string.h>
//# define N 30						//Ҷ�ӽ������ֵ
//# define M 2 * N - 1				//���н������ֵ
//# define MAX 99999
//
///*�������������Ͷ���*/
//typedef struct {
//	int weight;						//����Ȩֵ
//	int parent;						//˫�׵��±�
//	int LChild;						//���ӽ����±�
//	int RChild;						//�Һ��ӽ����±�
//}HTNode, HuffmanTree[M + 1];		//HuffmanTree��һ���ṹ�������ͣ�0�ŵ�Ԫ����
//
//HuffmanTree ht;
//
///*��ht[1]��ht[n]�ķ�Χ��ѡ������parentΪ0��weight��С�Ľ�㣬����ŷֱ𸳸�s1��s2*/
//void Select(HuffmanTree ht, int n, int* s1, int* s2) {
//	//���ñ�����Сֵmin1�ʹ�Сֵmin2
//	int min1 = MAX, min2 = MAX;
//	//��ų�ʼ��Ϊ0
//	*s1 = 0;*s2 = 0;
//	//����Ѱ����Сֵ�ʹ�Сֵ
//	for (int i = 1; i <= n; i++) {
//		//ǰ��������parentָ��Ϊ0�����������δ��ѡ��
//		if (ht[i].parent == 0) {
//			//�Ƚϣ��滻
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
///*�������������㷨*/
//void CrtHuffmanTree(HuffmanTree ht, int w[], int n) {
//	//�����������ht[M+1],w[]���n��Ȩֵ
//	// 
//	//1��n�ŵ�Ԫ���Ҷ�ӽ�㣬��ʼ��
//	for (int i = 1; i <= n; i++) {
//		ht[i].weight = w[i];
//		ht[i].parent = 0;
//		ht[i].RChild = 0;
//		ht[i].LChild = 0;
//	}
//	//���н������
//	// 
//	//n+1��m�ŵ�Ԫ��ŷ�Ҷ��㣬��ʼ��
//	for (int i = n + 1; i <= 2 * n - 1; i++) {
//		ht[i].weight = 0;
//		ht[i].parent = 0;
//		ht[i].RChild = 0;
//		ht[i].LChild = 0;
//	}
//
//	/*��ʼ����ϣ���ʼ������Ҷ���*/
//	//��ǰ��С��ֵ�����
//	int s1, s2;
//	for (int i = n + 1; i < 2 * n - 1; i++) {
//		Select(ht, i - 1, &s1, &s2);
//		ht[i].weight = ht[s1].weight + ht[s1].weight;
//		ht[s1].parent = i;
//		ht[s2].parent = i;
//		ht[i].LChild = s1;
//		ht[i].RChild = s2;
//	}
//	//������Ҷ��㣬����������
//	
//		//��ht[1]��ht[i-1]�ķ�Χ��ѡ������parentΪ0��weight��С�Ľ�㣬����ŷֱ𸳸�s1��s2
//	
//		//Ȩֵ���
//		
//		//���ø��׽ڵ�
//		
//		//���ø��׽ڵ�����Һ���
//		
//	
//}
//
///*����������*/
//void CrtHuffmanCode(HuffmanTree ht, int n, char str[]) {
//	//��Ҷ�ӽ�㵽����������ÿ��Ҷ�ӽ��(��n��)��Ӧ�Ĺ���������
//	//�����ַ��������ڱ������
//	char* c;
//	//���䵱ǰ����Ĺ����ռ�
//	c = (char*)malloc(sizeof(char) * n);
//	//��n��Ҷ�ӽ���Ӧ�Ĺ���������
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
//		printf("%c�ı��룺", str[i - 1]);
//		for (int j = 0; j < n; j++) {
//			if (c[j] == '0' || c[j] == '1') {
//				printf("%c", c[j]);		//�������
//			}
//		}
//		printf("\n");
//		memset(c, -1, n);//��cd��ʼ��
//	}
//		//��������Ӻ���ǰ�洢�����嵱ǰ��ʼҶ�ڵ㣬һ·���Ͻ����ж�
//		
//		//������׽ڵ����
//		
//			//��start�Ƶ����һλ�ַ���
//			
//			//�жϵ�ǰ�ڵ����丸�׽ڵ������
//			
//				//���֧��0
//			
//
//				//�ҷ�֧��1
//					
//			//���ϵ���
//		
//
//
//
//	//�������
//		
//	
//}
//
//int main() {
//	int i, w[5] = { 2,3,5,7,8 };
//	char str[5] = { 'c','s','e','a','t' };
//	CrtHuffmanTree(ht, w, 5);
//	printf("�������������ֵ��\n");
//	for (i = 1; i <= 9; i++)
//		printf("%d ", ht[i].weight);
//	printf("\n");
//	CrtHuffmanCode(ht, 5, str);
//	return 0;
//}

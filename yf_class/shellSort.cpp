///*
//	ϣ������
//			ֱ�Ӳ�������ĸĽ��汾����ʼʱ����һ������������ͨ��Ϊ���鳤�ȵ�һ�룬������������ֱ�Ӳ�������
//			ÿ�ֲ���������/2��
//			ֱ������Ϊһ����ʱ�൱�ڽ���һ��ԭʼֱ�Ӳ�������
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//void shellSort(int *arr, int len) {
//	int d = len / 2;
//	while (d>=1) {
//		for (int i = 0; i < d; i++) {
//			for (int j = i+d; j < len; j+=d) {
//				if (arr[j] < arr[j-d]) {
//					int nowN = arr[j],k;
//					for ( k = j; arr[k-d]> nowN; k-=d) {
//						arr[k] = arr[k - d];
//					}
//					arr[k] = nowN;
//				}
//			}
//
//		}
//		d /= 2;
//	}
//	
//
//}
//int main() {
//	int arr[] = { 9,3,4,10,2,5,7,12,10,15 };
//
//	shellSort(arr, 10);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
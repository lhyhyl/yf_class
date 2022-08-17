///*
//	希尔排序：
//			直接插入排序的改进版本，初始时会有一个排序增量，通常为数组长度的一半，按此增量进行直接插入排序，
//			每轮操作后将增量/2，
//			直至增量为一，此时相当于进行一次原始直接插入排序
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
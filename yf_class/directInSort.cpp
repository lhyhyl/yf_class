///*
//	直接插入排序：
//				从第一个数开始，插入到它前面应该在的位置
//*/
//#include <stdio.h>
//#include <stdlib.h>
//int bSearch(int* arr, int low, int high, int target) {
//	int mid;
//	while (low <= high) {
//		mid = (low + high) / 2;
//		if (arr[mid] < target) low = mid + 1;
//		else
//			high = mid - 1;
//	}
//	return low;
//}
//void directInsertSort(int* arr, int len) {
//	for (int i = 1; i < len; i++) {
//		int nowN = arr[i];
//		for (int j = 0; j < i; j++) {
//			if (arr[j] > arr[i]) {
//				for (int k = i - 1; k >= j; k--) {
//					arr[k + 1] = arr[k];
//				}
//				arr[j] = nowN;
//			}
//		}
//
//	}
//}
//void directInsertSort2(int* arr, int len) {
//	for (int i = 1; i < len; i++) {
//		int nowN = arr[i];
//		int end = bSearch(arr, 0, i - 1, arr[i]);
//		for (int k = i - 1; k >= end; k--) {
//			arr[k + 1] = arr[k];
//		}
//		arr[end] = nowN;
//		/*for (int j = 0; j < i; j++) {
//			if (arr[j] > arr[i]) {
//				for (int k = i - 1; k >= j; k--) {
//					arr[k + 1] = arr[k];
//				}
//				arr[j] = nowN;
//			}
//		}*/
//
//	}
//}
//int main() {
//	int arr[] = { 5,3,3,10,8,9,7,12 };
//	directInsertSort(arr, 8);
//	for (int i = 0; i < 8; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
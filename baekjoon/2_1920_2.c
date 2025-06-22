//// ¼ö Ã£±â
//
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void* arg1, const void* arg2) {
//	int num1 = *(int*)arg1;
//	int num2 = *(int*)arg2;
//
//	if (num1 < num2) return -1;
//	else return 1;
//}
//
//int binary_search(int* arr, int min, int max, int data) {
//	int mid = (min + max) / 2;
//
//	if (min > max) {
//		return 0;
//	}
//
//	if (arr[mid] == data) {
//		return 1;
//	}
//	else if(arr[mid] < data) {
//		binary_search(arr, mid + 1, max, data);
//	}
//	else {
//		binary_search(arr, min, mid - 1, data);
//	}
//	
//
//}
//
//int main() {
//	int M, N, i;
//	int p;
//	int* Array;
//
//	scanf("%d", &N);
//	Array = (int*)malloc(sizeof(int)*N);
//
//	for (i = 0; i < N; i++) { // Input
//		scanf("%d", &Array[i]);
//	}
//	qsort(Array, N, sizeof(int), compare);
//
//	scanf("%d", &M);
//
//	for (i = 0; i < M; i++) {
//		scanf("%d", &p);
//		printf("%d\n", binary_search(Array, 0, N-1, p));
//	}
//	return 0;
//}
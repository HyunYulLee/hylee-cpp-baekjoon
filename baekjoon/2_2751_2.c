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
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int* array = (int*)malloc(N * sizeof(int));
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &array[i]);
//	}
//
//	qsort(array, N, sizeof(array[0]), compare);
//
//	for (int a = 0; a < N; a++) {
//		printf("%d\n", array[a]);
//	}
//
//}
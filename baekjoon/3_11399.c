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
//	if (num1 < num2) return 1;
//	else return -1;
//}
//
//int main() {
//	int N, i;
//	int* Array;
//	int result = 0;
//
//	scanf("%d", &N);
//	Array = (int*)malloc(sizeof(int)*N);
//
//	for (i = 0; i < N; i++) { // Input
//		scanf("%d", &Array[i]);
//	}
//	qsort(Array, N, sizeof(int), compare);
//
//	for (i = 0; i < N; i++) {
//		
//		result +=  Array[i] * (i + 1);
//
//	}
//	printf("%d", result);
//
//}
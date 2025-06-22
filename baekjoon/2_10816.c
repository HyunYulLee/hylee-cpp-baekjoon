//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int array[20000001] = { 0, };
//
//int main() {
//	int N, i, k;
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++) {
//		scanf("%d", &k);
//		array[k + 10000000]++;
//	}
//
//	int M, j;
//	scanf("%d", &M);
//
//	for (i = 0; i < M; i++) {
//		scanf("%d", &j);
//		printf("%d ", array[j + 10000000]);
//	}
//}
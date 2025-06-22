//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//
//	int T, i, j;
//	int score = 0;
//	char S[80];
//	int A[80];
//	int size, stack = 0;
//	scanf("%d", &T);
//
//	for (i = 0; i < T; i++) {
//		stack = 0;
//		size = 0;
//		score = 0;
//
//		scanf("%s", &S);
//		size = strlen(S);
//		for (j = 0; j < size; j++) {
//			if (S[j] == 'O') A[j] = 1;
//			else A[j] = 0;
//		}
//		for (j = 0; j < size; j++) {
//			if (A[j] == 1) {
//				A[j] += stack;
//				stack++;
//			}
//			else stack = 0;
//		}
//		for (j = 0; j < size; j++) {
//			score += A[j];
//		}
//
//		printf("%d\n", score);
//
//
//	}
//	
//
//
//
//
//}
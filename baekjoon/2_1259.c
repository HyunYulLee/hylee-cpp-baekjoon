//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int size_check(int N, int x) {
//
//	int n = pow(10.0, (double)x - 1);
//
//	if (N / n != 0) return x;
//	else return size_check(N, x - 1);
//
//}
//
//
//int yesorno()
//{
//	int N, size;
//	int a, b, c, d, e;
//	// input
//	scanf("%d", &N); //입력할 수
//	
//	if (N == 0) {
//		return 0;
//	}
//
//	size = size_check(N, 5);
//
//	if (size == 1) {
//		printf("yes\n");
//	}
//	else if (size == 2) {
//		a = N / 10;
//		b = N - a * 10;
//		if (a == b) {
//			printf("yes\n");
//		}
//		else {
//			printf("no\n");
//		}
//	}
//	else if (size == 3){ // abc
//		a = N / 100;
//		c = N % 10;
//		if (a == c) {
//			printf("yes\n");
//		}
//		else {
//			printf("no\n");
//		}
//	}
//	else if (size == 4) {
//		a = N / 1000;
//		b = N / 100 - a * 10;
//		c = N / 10 - a * 100 - b * 10;
//		d = N - a * 1000 - b * 100 - c * 10;
//		if (a == d && b == c) {
//			printf("yes\n");
//		}
//		else {
//			printf("no\n");
//		}
//	}
//	else if (size == 5) {
//		a = N / 10000;
//		b = N / 1000 - a * 10;
//		c = N / 100 - a * 100 - b * 10;
//		d = N / 10 - a * 1000 - b * 100 - c * 10;
//		e = N - a * 10000 - b * 1000 - c * 100 - d * 10;
//		if (a == e && b == d) {
//			printf("yes\n");
//		}
//		else {
//			printf("no\n");
//		}
//	}
//	return 1;
//}
//
//int main() {
//
//	while (1) {
//		if (yesorno() == 0) {
//			return 0;
//		}
//	}
//
//}
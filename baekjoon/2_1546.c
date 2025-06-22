//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//
//int main() {
//
//	int N;
//	int max = 0;
//	scanf("%d", &N);
//	int a[1000];
//	double b[1000];
//	double temp = 0.00;
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		b[i] = (double)a[i] / max;
//		temp = temp + 100 * b[i];
//	}
//	double avr = (double)temp / N;
//
//	printf("%.6lf", avr);
//
//}
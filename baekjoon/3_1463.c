//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <math.h>
//
//int array[1000001];
//
//int main() {
//
//	for (int k=0; k < 1000001; k++) {
//		array[k] = 1000000;
//	}
//
//	int X;
//	scanf("%d", &X);
//	array[X] = 0;
//
//	for (int i = X; i > 0; i--) {
//		if (i % 3 == 0 && array[i / 3] > array[i]) {
//			array[i / 3] = array[i] + 1;
//		}
//		if (i % 2 == 0 && array[i / 2] > array[i]) {
//			array[i / 2] = array[i] + 1;
//		}
//		if (array[i - 1] > array[i]) {
//			array[i - 1] = array[i] + 1;
//		}
//
//	}
//	printf("%d\n", array[1]);
//
//}
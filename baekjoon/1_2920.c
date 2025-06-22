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
//	int T[9];
//	int count = 0;
//
//	for (int i = 0; i < 8; i++) {
//		scanf("%d", &T[i]);
//	}
//	for (int i = 0; i < 7; i++) {
//		if (T[i] < T[i + 1]) {
//			count++;
//		}
//		else if (T[i] > T[i + 1]) {
//			count--;
//		}
//	}
//
//	if (count == 7) {
//		printf("ascending");
//	}
//	else if (count == -7) {
//		printf("descending");
//	}
//	else printf("mixed");
//
//	
//
//
//}
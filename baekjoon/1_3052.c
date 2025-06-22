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
//	int input;
//	int T[11];
//	int swtch = 0;
//	int count = 0;
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &input);
//		T[i] = input % 42;
//		for (int j = 0; j < i; j++) {
//			if (T[j] != T[i]) {
//				swtch = 1;
//			}
//			if (T[j] == T[i]) {
//				swtch = 0;
//				break;
//			}
//		}
//		if (swtch == 1) {
//			count++;
//			swtch = 0;
//		}
//	}
//
//	printf("%d", count + 1);
//
//
//
//}
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//
//
//int main() {
//
//	int T, k;
//
//	int S[11]; // S √ ±‚»≠
//	S[0] = 0;
//	S[1] = 1;
//	S[2] = 2;
//	S[3] = 4;
//	for (int i = 4; i < 11; i++) {
//		S[i] = S[i - 1] + S[i - 2] + S[i - 3];
//	}
//
//	scanf("%d", &T);
//	
//	for (int i = 0; i < T; i++) {
//
//		scanf("%d", &k); 
//		printf("%d\n", S[k]);
//
//	}
//
//}
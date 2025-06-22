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
//	int i;
//	char S[1000001];
//	gets(S);
//	int size = strlen(S);
//	int count = 0;
//
//
//
//	for (i = 0; i < size; i++) {	
//	
//		if (S[i] == ' ' && i != 0 && i != size-1) count++;
//		if (size == 1 && S[0] == ' ') count = -1;
//	}
//
//	printf("%d", count + 1);
//
//
//
//
//
//}
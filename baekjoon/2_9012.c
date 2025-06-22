//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//char stack[51];
//int top = -1;
//
//int isEmpty() {
//	return top < 0;
//}
//
//void push(char value) {
//	stack[++top] = value;
//}
//
//void pop() {
//	if (!isEmpty()) top--;
//}
//
//
//int main() {
//
//	int T, i, j;
//
//	scanf("%d", &T);
//
//	for (i = 0; i < T; i++) {
//		char k[51];
//		scanf("%s", &k);
//		top = -1;
//
//		for (j = 0; k[j] != '\0'; j++) {
//
//			if (top >= 0 && stack[top] == '(' && k[j] == ')') {
//				pop();
//			}
//			else {
//				push(k[j]);
//			}
//
//		}
//		if (isEmpty()) printf("YES\n");
//		else printf("NO\n");
//	}
//}
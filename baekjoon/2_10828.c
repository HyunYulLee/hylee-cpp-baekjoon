//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int stack[10001];
//int top = -1;
//
//int isEmpty() {
//	if (top == -1) {
//		return 1;
//	}
//	else return 0;
//}
//
//void push(int value) {
//	stack[++top] = value;
//}
//
//int pop() {
//	int out = stack[top];
//	if (!isEmpty()) top--;
//	return out;
//}
//
//
//int main() {
//
//	int N, i;
//	char input[10000][6];
//	int value;
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++) {
//		scanf("%s", &input[i]);
//
//		if (strcmp(input[i], "push") == 0) {
//			scanf("%d", &value);
//			push(value);
//		}
//		else if (strcmp(input[i], "pop") == 0) {
//			if (isEmpty()) {
//				printf("-1\n");
//			}
//			else { printf("%d\n", pop()); }
//		}
//		else if (strcmp(input[i], "size") == 0) {
//			printf("%d\n", top + 1);
//		}
//		else if (strcmp(input[i], "empty") == 0) {
//			printf("%d\n", isEmpty());
//		}
//		else if (strcmp(input[i], "top") == 0) {
//			if (isEmpty()) {
//				printf("-1\n");
//			}
//			else { printf("%d\n", stack[top]); }
//		}
//		else {
//			printf("Wrong Input\n");
//		}
//	}
//	
//
//}
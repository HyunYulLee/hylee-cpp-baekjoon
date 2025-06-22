//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//typedef struct Node {
//	int data;
//	char name[101];
//	int index;
//}Node;
//
//
//int compare(const void* arg1, const void* arg2) {
//	Node* one = (Node*)arg1;
//	Node* two = (Node*)arg2;
//
//	if (one->data < two->data) return -1;
//	else if (one->data > two->data) return 1;
//	else return (one->index > two->index ? 1 : -1);
//}
//
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//	Node* Array = (Node*)malloc(sizeof(Node)* N);
//
//	for (int i = 0; i < N; i++) {
//
//		scanf("%d%*c%s", &Array[i].data, &Array[i].name);
//		Array[i].index = i;
//	}
//
//	qsort(Array, N, sizeof(Node), compare);
//
//
//	for (int i = 0; i < N; i++) {
//		printf("%d %s\n", Array[i].data, Array[i].name);
//	}
//	free(Array);
//	
//	return 0;
//
//
//}
//
//
//

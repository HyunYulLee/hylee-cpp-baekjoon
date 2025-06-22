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
//	int x;
//	int y;
//}Node;
//
//
//compare(const void* arg1, const void* arg2) {
//	Node* one = (Node*)arg1;
//	Node* two = (Node*)arg2;
//
//	if (one->x > two->x) return 1;
//	else if (one->x < two->x) return -1;
//	else {
//		if (one->y > two->y) return 1;
//		else if (one->y < two->y) return -1;
//	}
//}
//
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//	Node* Array = (Node*)malloc(sizeof(Node) * N);
//
//	for (int i = 0; i < N; i++) {
//
//		scanf("%d%*c%d", &Array[i].x, &Array[i].y);
//
//	}
//
//	qsort(Array, N, sizeof(Node), compare);
//
//
//	for (int i = 0; i < N; i++) {
//		printf("%d %d\n", Array[i].x, Array[i].y);
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

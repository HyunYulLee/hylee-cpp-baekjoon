//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Node {
//	int data;
//	struct Node* Left;
//	struct Node* Right;
//}Node;
//
//Node* Insert(Node* node, int data) {
//	if (node == NULL) {
//		Node* newNode = (Node*)malloc(sizeof(Node));
//		newNode->data = data;
//		newNode->Left = NULL;
//		newNode->Right = NULL;
//
//		return newNode;
//	}
//	else {
//		if (node->data > data) {
//			node->Left = Insert(node->Left, data);
//		}
//		else {
//			node->Right = Insert(node->Right, data);
//		}
//	}
//
//	return node;
//}
//
//void TPrint(Node* node) {
//	
//	if (node == NULL) return;
//	
//	TPrint(node->Left);
//	printf("%d\n", node->data);
//	TPrint(node->Right);
//}
//
//
//int main() {
//	int N, a;
//	scanf("%d", &N);
//	Node* root = NULL;
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a);
//		root = Insert(root, a);
//	}
//
//	TPrint(root);
//	
//}
//
//
//

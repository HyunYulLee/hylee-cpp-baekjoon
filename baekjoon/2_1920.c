//// ¼ö Ã£±â
//
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
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
//		else if (node->data < data) {
//			node->Right = Insert(node->Right, data);
//		}
//		else {
//
//		}
//	}
//
//	return node;
//}
//
//int search(Node* root, int data) {
//
//	if (data == root->data) {
//		return 1;
//	}
//	else if (data < root->data) {
//		if (root->Left != NULL) {
//			search(root->Left, data);
//		}
//		else { // NULL
//			return 0;
//		}
//	}
//	else if (data > root->data) {
//		if (root->Right != NULL) {
//			search(root->Right, data);
//		}
//		else { // NULL
//			return 0;
//		}
//	}
//
//}
//
//int main() {
//	int a;
//	int M, N, i;
//	int p;
//	Node* root = NULL;
//
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++) { // Input
//		scanf("%d", &a);
//		root = Insert(root, a);
//	}
//
//	scanf("%d", &M);
//	for (i = 0; i < M; i++) {
//		scanf("%d", &p);
//		printf("%d\n", search(root, p));
//	}
//	return 0;
//}
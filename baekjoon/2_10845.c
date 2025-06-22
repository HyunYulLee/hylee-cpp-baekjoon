//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Node {
//	int value;
//	struct Node* next;
//	struct Node* prev;
//}Node;
//
//typedef struct {
//	Node* in;
//	Node* out;
//	int size;
//}Queue;
//
//Node* makeNode(int value) {
//	Node* N = (Node*)malloc(sizeof(Node));
//	N->value = value;
//	N->next = NULL;
//	N->prev = NULL;
//	return N;
//}
//
//Queue makeQ() {
//	Queue Q;
//	Q.in = NULL;
//	Q.out = NULL;
//	Q.size = 0;
//	return Q;
//}
//
//
//void push(Queue* Q, int value) {
//	Node* n = makeNode(value);
//	n->value = value;
//
//	if (Q->out == NULL) {
//		Q->in = n;
//		Q->out = n;
//		Q->size++;
//	}
//	else {
//		n->next = Q->in;
//		Q->in->prev = n;
//		Q->in = n;
//		Q->size++;
//	}
//}
//
//int pop(Queue* Q) {
//
//	if (Q->out == NULL) {
//		Q->in = NULL;
//		Q->size = 0;
//		int out = -1;
//		return out;
//	}
//	Node* N = Q->out;
//	Q->out = N->prev;
//	Q->size--;
//
//	int out = N->value;
//
//	return out;
//}
//
//int isEmpty(Queue* Q) {
//	return Q->out == NULL;
//}
//
//
//int main() {
//
//	int N, i, k;
//	char input[6];
//	scanf("%d", &N);
//	Queue Q = makeQ();
//
//	for (i = 0; i < N; i++) {
//		scanf("%s", &input);
//		if (input[1] == 'u') { // push
//			scanf("%d", &k);
//			push(&Q, k);
//		}
//		else if (input[1] == 'o') { // pop
//			printf("%d\n", pop(&Q));
//		}
//		else if (input[1] == 'i') { // size
//			printf("%d\n", Q.size);
//		}
//		else if (input[1] == 'm') { // empty
//			printf("%d\n", isEmpty(&Q));
//		}
//		else if (input[1] == 'r') { // front
//			if (isEmpty(&Q)) {
//				printf("-1\n");
//			} else printf("%d\n", Q.out->value);
//		}
//		else if (input[1] == 'a') { // back
//			if (isEmpty(&Q)) {
//				printf("-1\n");
//			}
//			else printf("%d\n", Q.in->value);
//		}
//		else printf("Wrong input");
//
//
//	}
//	return 0;
//}
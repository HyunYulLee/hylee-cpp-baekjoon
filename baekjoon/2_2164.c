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
//	}
//	else {
//		n->next = Q->in;
//		Q->in->prev = n;
//		Q->in = n;
//	}
//}
//
//int pop(Queue* Q) {
//
//	Node* N = Q->out;
//	int out = N->value;
//	Q->out = N->prev;
//
//	if (Q->out == NULL) {
//		Q->in = NULL;
//	}
//	else {
//		Q->out->next = NULL;
//	}
//
//	return out;
//
//}
//
//int isEmpty(Queue* Q) {
//	return Q->out == NULL;
//}
//
//int main() {
//
//	int N, out, on;
//	scanf("%d", &N);
//	Queue Q = makeQ();
//
//	for (int i = 1; i < N+1; i++) {	
//		push(&Q, i);
//	}
//
//
//	while (1) {
//		
//		if (&Q.in->value == &Q.out->value) {
//			printf("%d", Q.out->value);
//			break;
//		}
//
//		pop(&Q);
//		out = pop(&Q);
//		push(&Q, out);
//
//	}
//
//	return 0;
//}
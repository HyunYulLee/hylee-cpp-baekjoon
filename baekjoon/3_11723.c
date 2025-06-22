//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void S_add(int S[22], int x) {
//	S[x] = 1;
//}
//
//void S_remove(int S[22], int x) {
//	S[x] = -1;
//}
//
//void S_check(int S[22], int x) {
//	if (S[x] == 1) printf("1\n");
//	else printf("0\n");
//}
//
//void S_toggle(int S[22], int x) {
//	if (S[x] == 1) S[x] = -1;
//	else S[x] = 1;
//}
//
//void S_all(int S[22], int x) {
//	for (int i = 1; i < 21; i++) {
//		S[i] = 1;
//	}
//}
//
//void S_empty(int S[22], int x) {
//	for (int i = 1; i < 21; i++) {
//		S[i] = -1;
//	}
//}
//
//
//	int main() {
//
//		int N, k;
//		int S[22] = { -1, };
//
//		scanf("%d", &N);
//		char input[7];
//
//		for (int i = 0; i < N; i++) {
//			scanf("%s", &input);
//			int k;
//			if (input[1] == 'd') { // add
//				scanf("%d", &k);
//				S_add(S, k);
//			}
//			else if (input[1] == 'e') { // remove
//				scanf("%d", &k);
//				S_remove(S, k);
//			}
//			else if (input[1] == 'h') { // check
//				scanf("%d", &k);
//				S_check(S, k);
//			}
//			else if (input[1] == 'o') { // toggle
//				scanf("%d", &k);
//				S_toggle(S, k);
//			}
//			else if (input[1] == 'l') { // all
//				scanf("%d", &k);
//				S_all(S, k);
//			}
//			else if (input[1] == 'm') { // empty
//				scanf("%d", &k);
//				S_empty(S, k);
//			}
//			else printf("Wrong input");
//		}
//	}

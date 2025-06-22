//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int B_check(char board[50][50], int i, int j) {
//	int l, k, count = 0;
//	for (l = 0; l < 8; l++) {
//		for (k = 0; k < 8; k++) {
//			if ((l + k) % 2 == 0 && board[i + l][j + k] != 'B') count++;
//			if ((l + k) % 2 == 1 && board[i + l][j + k] != 'W') count++;
//		}
//	}
//	return count;
//}
//
//int W_check(char board[50][50], int i, int j) {
//	int l, k, count = 0;
//	for (l = 0; l < 8; l++) {
//		for (k = 0; k < 8; k++) {
//			if ((l + k) % 2 == 0 && board[i + l][j + k] != 'W') count++;
//			if ((l + k) % 2 == 1 && board[i + l][j + k] != 'B') count++;
//		} 
//	}
//	return count;
//}
//
//int BW_check(char board[50][50], int i, int j) {
//	int l, k, B_count = 0;
//	for (l = 0; l < 8; l++) {
//		for (k = 0; k < 8; k++) {
//			if ((l + k) % 2 == 0 && board[i + l][j + k] != 'B') B_count++;
//			if ((l + k) % 2 == 1 && board[i + l][j + k] != 'W') B_count++;
//		}
//	}
//
//	int W_count = 0;
//	for (l = 0; l < 8; l++) {
//		for (k = 0; k < 8; k++) {
//			if ((l + k) % 2 == 0 && board[i + l][j + k] != 'W') W_count++;
//			if ((l + k) % 2 == 1 && board[i + l][j + k] != 'B') W_count++;
//		}
//	}
//
//	return B_count < W_count ? B_count : W_count;
//}
//
//int main() {
//
//	int N, M, p;
//	char input[50][50];
//
//	scanf("%d %d", &N, &M);
//
//	for (p = 0; p < N; p++) {
//		scanf("%s", input[p]);
//	}
//
//	int i, j, min = 64;
//
//	for (i = 0; i <= N - 8; i++) {
//		for (j = 0; j <= M - 8; j++) {
//			if (input[i][j] == 'B') {	
//				if (min > BW_check(input, i, j)) min = BW_check(input, i, j);
//			}
//			else if (input[i][j] == 'W') {
//				if (min > BW_check(input, i, j)) min = BW_check(input, i, j);
//			}
//		}
//
//	}
//
//	printf("%d", min);
//
//
//}
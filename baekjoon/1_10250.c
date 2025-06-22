//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//
//
//int main() {
//
//	int H, W, N;
//	int T, i, s;
//	int H_count, W_count;
//
//	scanf("%d", &T);
//
//	for (i = 0; i < T; i++) {
//		scanf("%d %d %d", &H, &W, &N);
//		s = -1;
//
//		for (W_count = 1; W_count < W + 1; W_count++) {
//			for (H_count = 1; H_count < H + 1; H_count++) {
//				N--;
//				if (N == 0) {
//					s = 0;
//				}
//				if (s == 0) break;
//			}
//			if (s == 0) break;
//		}
//
//		printf("%d%02d\n", H_count, W_count);
//	}
//
//
//
//
//}
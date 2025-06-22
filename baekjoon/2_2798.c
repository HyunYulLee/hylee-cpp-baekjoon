//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N, M;
//	int x, y, z;
//	int sum = 0, max = 0;
//	int cnt = 0;
//	// input
//	scanf("%d %d", &N, &M); //입력할 수
//	int* a = (int*)malloc(N * sizeof(int));
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	for (int x = 0; x < N; x++) {
//		for (int y = x+1; y < N; y++) {
//			for (int z = y+1; z < N; z++) {
//				int sum = a[x] + a[y] + a[z];
//				if (sum > max && sum <= M) {
//					max = sum;
//				}
//			}
//		}
//	}
//	
//	printf("%d", max);
//	
//
//	//// ans1
//	//int ans1;
//
//
//	//// print
//	//printf("%d\n", ans1);
//
//}
//
//
//

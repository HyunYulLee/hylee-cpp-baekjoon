//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//
//// 이항계수
//
//int fact(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	return result;
//}
//
//int bc(int n, int k) {
//	int result = 1;
//	for (int i = 0; i < k; i++) {
//		result *= n - i;
//	}
//	result /= fact(k);
//	return result;
//}
//
//
//int main() {
//	int n, k;
//	scanf("%d %d", &n, &k);
//	printf("%d", bc(n, k));
//}
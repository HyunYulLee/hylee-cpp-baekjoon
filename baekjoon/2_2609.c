//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//
//// 최대공약수와 최소공배수
//
//int gcd(int a, int b) {
//	if (!(a % b)) {
//		return b;
//	} return gcd(b, a % b);
//}
//
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n%d", gcd(a, b), a*b / gcd(a,b));
//}
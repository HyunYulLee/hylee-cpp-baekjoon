//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//
//// �ִ������� �ּҰ����
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
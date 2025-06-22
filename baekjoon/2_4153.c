//#include <stdio.h>
//
//int find_max(int a, int b) {
//	if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//
//	int n1;
//	int n2;
//	int n;
//
//
//	while (1) {
//
//		scanf_s("%d %d %d", &a, &b, &c);
//
//		int p_a = a * a;
//		int p_b = b * b;
//		int p_c = c * c;
//
//
//		n1 = find_max(a, b);
//		n2 = find_max(b, c);
//
//		n = find_max(n1, n2); // max of a, b, c
//		
//		if (a + b + c == 0) {
//			return 0;
//		}
//		else if (n1 == n2) {
//			// b is max or all same
//			if (p_b == p_a + p_c) {
//				printf("right\n");
//			}
//			else {
//				printf("wrong\n");
//			}
//
//		}
//		else if (n == n1) {
//			// a is max
//			if (p_a == p_b + p_c) {
//				printf("right\n");
//			}
//			else {
//				printf("wrong\n");
//			}
//		}
//		else if (n == n2) {
//			// c is max
//			if (p_c == p_a + p_b) {
//				printf("right\n");
//			}
//			else {
//				printf("wrong\n");
//			}
//		}
//
//
//	}
//}
//
//
//

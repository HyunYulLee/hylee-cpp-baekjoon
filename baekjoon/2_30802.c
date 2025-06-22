//#include <stdio.h>
//
//int cal(int num1, int num2)
//{
//	int cal_result;
//	if (num1 % num2 == 0) { // 나누어 떨어진다면 + 0
//		cal_result = num1 / num2;
//	}
//	else { // 나누어 떨어지지 않는다면 + 1
//		cal_result = num1 / num2 + 1;
//	}
//	return cal_result;
//}
//
//
//
//int main()
//{
//	int N, S, M, L, XL, XXL, XXXL, T, P;
//
//	scanf_s("%d", &N); //참가자 수
//	scanf_s("%d %d %d %d %d %d", &S, &M, &L, &XL, &XXL, &XXXL);
//	scanf_s("%d %d", &T, &P);
//	
//	// ans1
//	int ans1;
//	ans1 = cal(S, T) + cal(M, T) + cal(L, T) + cal(XL, T) + cal(XXL, T) + cal(XXXL, T);
//	
//
//	// ans2
//	int ans2_1, ans2_2;
//	ans2_1 = N / P;
//	ans2_2 = N % P;
//
//
//
//	// print
//	printf("%d\n", ans1); //티셔츠를 T장씩 최소 몇 묶음 주문해야 하는지
//	printf("%d %d", ans2_1, ans2_2); //펜을 P자루씩 최대 몇 묶음 주문할 수 있는지와, 그 때 펜을 한 자루씩 몇 개 주문하는지
//
//}
//
//
//

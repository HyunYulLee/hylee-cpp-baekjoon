//#include <stdio.h>
//
//int cal(int num1, int num2)
//{
//	int cal_result;
//	if (num1 % num2 == 0) { // ������ �������ٸ� + 0
//		cal_result = num1 / num2;
//	}
//	else { // ������ �������� �ʴ´ٸ� + 1
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
//	scanf_s("%d", &N); //������ ��
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
//	printf("%d\n", ans1); //Ƽ������ T�徿 �ּ� �� ���� �ֹ��ؾ� �ϴ���
//	printf("%d %d", ans2_1, ans2_2); //���� P�ڷ羿 �ִ� �� ���� �ֹ��� �� �ִ�����, �� �� ���� �� �ڷ羿 �� �� �ֹ��ϴ���
//
//}
//
//
//

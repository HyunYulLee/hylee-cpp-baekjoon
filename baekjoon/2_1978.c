//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int count;
//
//int main()
//{
//	int N;
//	// input
//	scanf("%d", &N); //�Է��� ��
//	int* a = (int*)malloc(N * sizeof(int));
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	for (int i = 0; i < N; i++) {
//
//		if (a[i] == 1) {
//			count++; // count => �Ҽ��� �ƴ� �� (���𰡷� ������ ��)
//		}
//
//		for (int j = 2; j < a[i]; j++) {
//			int temp = a[i] % j; // a�� j�� ���� ������
//			if (temp == 0) {
//				count++;
//				break;
//			}
//		}
//	}
//
//
//	// ans1
//	int ans1 = N - count;
//	
//
//	// print
//	printf("%d\n", ans1); // �Ҽ��� ���� ���
//
//}
//
//
//

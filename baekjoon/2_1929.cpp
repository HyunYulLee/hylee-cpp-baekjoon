//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int M, N;
//	cin >> M >> N;
//
//	vector<int> prime_number(1000000, 0); // 0 �ʱ�ȭ
//
//	prime_number[1] = 1; // Ư�� ���̽� (1) 1�� ��ȯ
//	
//	for (int i = 2; i < 1000000;i++) {
//		for (int j = 2; i*j < 1000000; j++) {
//			prime_number[i * j]++; // �ռ����� 1�� ��ȯ
//		}
//	}
//
//	for (int i = M; i <= N; i++) { // M�̻� N������ �Ҽ� ���
//		if (prime_number[i] == 0) {
//			cout << i << "\n";
//		}
//	}
//
//	
//
//
//}
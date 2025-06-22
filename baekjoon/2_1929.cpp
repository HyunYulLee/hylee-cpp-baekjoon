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
//	vector<int> prime_number(1000000, 0); // 0 초기화
//
//	prime_number[1] = 1; // 특수 케이스 (1) 1로 전환
//	
//	for (int i = 2; i < 1000000;i++) {
//		for (int j = 2; i*j < 1000000; j++) {
//			prime_number[i * j]++; // 합성수를 1로 전환
//		}
//	}
//
//	for (int i = M; i <= N; i++) { // M이상 N이하의 소수 출력
//		if (prime_number[i] == 0) {
//			cout << i << "\n";
//		}
//	}
//
//	
//
//
//}
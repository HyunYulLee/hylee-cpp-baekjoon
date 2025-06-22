//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N, K; cin >> N >> K;
//	vector<int> coins;
//	int num_of_coins = 0;
//
//	for (int i = 0; i < N; i++) {
//		int input; cin >> input;
//		coins.push_back(input);
//	}
//
//	while (K) {
//		num_of_coins += (K / coins[N - 1]);
//		K %= coins[N - 1];
//		N--;
//	}
//	cout << num_of_coins;
//}
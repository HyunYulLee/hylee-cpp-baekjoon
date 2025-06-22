//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int K, sum = 0;
//	cin >> K;
//	stack<int> account;
//	
//	for (int i = 0; i < K; i++) {
//		int input;
//		cin >> input;
//
//		if (input == 0) {
//			account.pop();
//		}
//		else {
//			account.push(input);
//		}
//	}
//
//	while (account.size()) {
//		sum += account.top();
//		account.pop();
//	}
//
//	cout << sum;
//
//}
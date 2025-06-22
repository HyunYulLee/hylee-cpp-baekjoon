//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	vector<long long> padovan_sequence = { 0, 1, 1, 1, 2 }; // f(0) = 0 | f(n) = f(n - 1) + f(n - 5) (n >= 5)
//	int T; cin >> T;
//	while (T--) {
//		int n; cin >> n;
//		int curr = padovan_sequence.size() - 1;
//		if (curr < n) {
//			while (curr != n) {
//				long long next = padovan_sequence[curr] + padovan_sequence[curr - 4];
//				padovan_sequence.emplace_back(next);
//				curr = padovan_sequence.size() - 1;
//			}
//		}
//		cout << padovan_sequence[n] << '\n';
//	}
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	vector<int> stairs = { 0 }; // f(0) = 0
//	vector<int> score(N + 1, 0);
//	for (int i = 0; i < N; i++) {
//		int input; cin >> input;
//		stairs.emplace_back(input);
//	}
//	score[1] = stairs[1];
//	score[2] = stairs[1] + stairs[2];
//	for (int i = 3; i <= N; i++) { // bottom-up
//		score[i] = max(score[i - 2], stairs[i - 1] + score[i - 3]) + stairs[i];
//	}
//	cout << score[N];
//}
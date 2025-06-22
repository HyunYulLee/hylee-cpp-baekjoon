//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	long long N, M; cin >> N >> M;
//	long long max = 0;
//	vector<long long> trees;
//	int answer;
//	for (int i = 0; i < N; i++) {
//		long long input;
//		cin >> input;
//		trees.push_back(input);
//		if (max < input) max = input;
//	}
//
//	long long left = 0, right = max;
//	long long height = 0;
//	while (left <= right) {
//		height = (left + right) / 2;
//		long long sum = 0;
//		for (int i = 0; i < N; i++) {
//			if (trees[i] > height) sum += (trees[i] - height);
//		}
//		if (sum >= M) {
//			answer = height;
//			left = height + 1;
//		}
//		else right = height - 1;
//	}
//
//	cout << answer;
//}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K; cin >> N >> K;
	vector<vector<int>> knapsack(N + 1, vector<int>(K + 1));
	vector<pair<int, int>> wv;
	for (int i = 0; i < N; i++) {
		int weight, value;
		cin >> weight >> value;
		wv.push_back({ weight, value });
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			int curr_weight = wv[i - 1].first;
			int curr_value = wv[i - 1].second;
			if (curr_weight <= j) {
				knapsack[i][j] = max(knapsack[i - 1][j], knapsack[i - 1][j - curr_weight] + curr_value);
			}
			else {
				knapsack[i][j] = knapsack[i - 1][j];
			}
		}
	}

	cout << knapsack[N][K];
}
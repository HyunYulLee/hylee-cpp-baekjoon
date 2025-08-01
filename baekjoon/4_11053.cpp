#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N; cin >> N;
	vector<int> A;
	for (int i = 0; i < N; i++) {
		int input; cin >> input;
		A.push_back(input);
	}
	vector<int> dp(N);
	for (int i = 0; i < N; i++) {
		dp[i] = 1; // min
		for (int j = 0; j < i; j++) {
			if(A[i] > A[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	int max_lis = *max_element(dp.begin(), dp.end());


	cout << max_lis;
}
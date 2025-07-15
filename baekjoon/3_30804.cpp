#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	int N; cin >> N;
	vector<int> Tanghulu;
	vector<bool> jump(N, false);
	for (int i = 0; i < N; i++) {
		int input; cin >> input;
		Tanghulu.push_back(input);
	}

	int left = 0, right = 0;
	map<int, int> count;
	int max = 0;
	while (right < N) {
		count[Tanghulu[right]]++;

		while (count.size() > 2) {
			count[Tanghulu[left]]--;
			if (count[Tanghulu[left]] == 0) count.erase(Tanghulu[left]);
			left++;
		}
		
		if (max < right - left + 1) max = right - left + 1;
		right++;
	}

	cout << max;
}
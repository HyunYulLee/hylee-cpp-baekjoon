#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

auto seg(vector<long long>& tree, vector<long long> Arr, long long Node, long long start, long long end) { // 세그트리 구성
	if (start == end) {
		tree[Node] = Arr[start];
		return Arr[start];
	}
	long long mid = (start + end) / 2;
	tree[Node * 2] = seg(tree, Arr, Node * 2, start, mid);
	tree[Node * 2 + 1] = seg(tree, Arr, Node * 2 + 1, mid + 1, end);
	return tree[Node * 2] + tree[Node * 2 + 1];
}

long long seg_sum(vector<long long> &tree, long long Node, long long left, long long right, long long start, long long end) {
	if (right < start || end < left) return 0; // 완전히 벗어날 경우
	if (end <= right && left <= start) return tree[Node]; // 완전히 포함할 경우
	// 걸칠 경우
	long long mid = (start + end) / 2;
	return seg_sum(tree, Node * 2, left, right, start, mid) + seg_sum(tree, Node * 2 + 1, left, right, mid + 1, end);
}

auto seg_change(vector<long long>& tree, long long Node, long long index, long long start, long long end, long long diff) {
	if (index < start || end < index) return;
	tree[Node] += diff;
	if (start != end) {
		long long mid = (start + end) / 2;
		seg_change(tree, Node * 2, index, start, mid, diff);
		seg_change(tree, Node * 2 + 1, index, mid + 1, end, diff);
	}
}


int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	long long N, M, K; cin >> N >> M >> K;
	long long H = ceil(log2(N));
	long long size = 1 << (H + 1);

	vector<long long> Arr(N);
	vector<long long> seg_tree(size);
	vector<long long> result;
	for (long long i = 0; i < N; i++) {
		cin >> Arr[i];
	}

	// 세그먼트 트리 생성
	seg(seg_tree, Arr, 1, 0, N - 1);
	
	for (int i = 0; i < M + K; i++) {
		long long input; cin >> input;
		if (input == 1) {
			long long target, value; cin >> target >> value;
			long long diff = value - Arr[target - 1];
			Arr[target - 1] = value;
			seg_change(seg_tree, 1, target - 1, 0, N - 1, diff);
		}
		else { // 2
			long long left, right; cin >> left >> right;
			result.push_back(seg_sum(seg_tree, 1, left - 1, right - 1, 0, N - 1));
		}
	}

	for (auto i : result) {
		printf("%lld \n", i);
	}


}
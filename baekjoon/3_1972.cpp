//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int h_delete(vector<int>& min_heap) {
//	if (min_heap.size() == 1) return 0;
//	bool finished = 0;
//	int result = min_heap[1];
//	int last_index = min_heap.size() - 1;
//	min_heap[1] = min_heap[last_index]; min_heap.pop_back();
//	int curr = 1;
//	while (!finished) {
//		if (curr * 2 == min_heap.size() - 1 || curr * 2 + 1 <= min_heap.size() - 1 && min_heap[curr * 2] < min_heap[curr * 2 + 1]) {
//			if (min_heap[curr] > min_heap[curr * 2]) {
//				swap(min_heap[curr], min_heap[curr * 2]);
//				curr *= 2;
//			}
//			else finished = 1;
//		}
//		else {
//			if (curr * 2 + 1 <= min_heap.size() - 1 && min_heap[curr] > min_heap[curr * 2 + 1]) {
//				swap(min_heap[curr], min_heap[curr * 2 + 1]);
//				curr *= 2;
//				curr++;
//			}
//			else finished = 1;
//		}
//	}
//
//	return result;
//}
//
//void h_insert(vector<int>& min_heap, int data) {
//	bool finished = 0;
//	min_heap.push_back(data);
//	int curr = min_heap.size() - 1;
//	while (!finished) {
//		int parent = curr / 2;
//		if (min_heap[parent] <= min_heap[curr]) finished = 1;
//		else {
//			swap(min_heap[curr], min_heap[parent]);
//			curr = parent;
//		}
//	}
//}
//
//int main() {
//	vector<int> min_heap = { -1 };
//	vector<int> ans;
//	int N; cin >> N;
//	while (N--) {
//		int x; cin >> x;
//		if (x == 0) {
//			ans.push_back(h_delete(min_heap));
//		}
//		else {
//			h_insert(min_heap, x);
//		}
//	}
//	for (auto i = 0; i < ans.size(); i++) printf("%d \n", ans[i]);
//}

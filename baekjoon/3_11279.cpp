//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int main() {
//	priority_queue<int> max_heap;
//	vector<int> result;
//
//	int T; cin >> T;
//	while (T--) {
//		int input; cin >> input;
//		if (input == 0) {
//			if (!max_heap.empty()) {
//				result.push_back(max_heap.top());
//				max_heap.pop();
//			}
//			else {
//				result.push_back(0);
//			}
//		}
//		else {
//			max_heap.push(input);
//		}
//	}
//
//	for (auto i : result) {
//		cout << i << '\n';
//	}
//}
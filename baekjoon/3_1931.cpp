//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	vector<pair<int, int>> m;
//	for (int i = 0; i < N; i++) {
//		int start, end;
//		cin >> start >> end;
//		m.push_back({start, end});
//	}
//	sort(m.begin(), m.end(), [](pair<int, int> a, pair<int, int> b) {
//		if (a.second == b.second) return a.first < b.first;
//		else return a.second < b.second;
//		});
//	int cnt = 0;
//	int right = 0;
//	for (auto times : m) {
//		if (times.first >= right) {
//			cnt++;
//			right = times.second;
//		}
//	}
//
//	cout << cnt;
//}
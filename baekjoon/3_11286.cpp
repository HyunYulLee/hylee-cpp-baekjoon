//#include <iostream>
//#include <vector>
//#include <queue>
//#include <functional>
//
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//	while (N--) {
//		int x; cin >> x;
//		if (x > 0) pq.push({ x, 1 }); // 양수
//		else if (x < 0) pq.push({ -x, 0 }); // 음수
//		else {
//			if (pq.empty()) cout << '0' << '\n';
//			else {
//				if (pq.top().second == 1) {
//					cout << pq.top().first << '\n';
//				}
//				else {
//					cout << -1 * pq.top().first << '\n';
//				}
//				pq.pop();
//			}
//		}
//	}
//}
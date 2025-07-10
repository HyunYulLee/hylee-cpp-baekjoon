//#include<iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	vector<int> fourSquares(50001, -1);
//	vector<bool> visited(50001, false);
//	queue<pair<int, int>> q;
//
//	pair<int, int> initial;
//	initial.second = 1;
//	for (int i = 1; i*i < 50001; i++) {
//		initial.first = i * i;
//		q.push(initial);
//		fourSquares[initial.first] = initial.second;
//		visited[initial.first] = true;
//	} 
//
//	while (!q.empty()) {
//		auto front = q.front(); q.pop();
//				
//		pair<int, int> next;
//		next.second = front.second + 1; // depth ++
//		if (next.second > 4) continue;
//
//		for (int i = 1; front.first + i * i < 50001; i++) {
//			next.first = front.first + i * i;
//			if (!visited[next.first]) {
//				q.push(next);
//				fourSquares[next.first] = next.second;
//				visited[next.first] = true;
//			}
//
//		}
//
//	}
//
//	cout << fourSquares[n];
//
//
//}
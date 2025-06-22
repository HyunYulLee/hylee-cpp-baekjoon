//#include <iostream>
//#include <queue>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int main() {	
//	map<int, vector<int>> m;
//	int T, n;
//	cin >> T >> n;
//	int a, b;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		m[a].push_back(b);
//		m[b].push_back(a);
//	}
//
//	queue<int> q;
//	vector<bool> visit(n+1, false);
//	q.push(1);
//	visit[1] = true;
//	int tr = 0;
//
//	while (!q.empty()) {
//		int i = q.front();
//		q.pop();
//		for (int k:m[i]) {
//			if (!visit[k]) {
//				q.push(k);
//				visit[k] = true;
//				tr++;
//			}
//
//		}
//	}
//	cout << tr;
//
//
//}
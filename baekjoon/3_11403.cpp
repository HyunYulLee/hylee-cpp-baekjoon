//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//auto bfs(const vector<vector<int>> &g, int index) { // g를 받아서 인덱스 번째 노드가 어느 노드들을 지나는지 체크
//	int N = g.size() - 1;
//	vector<int> result(N + 1);
//	vector<int> visited(N + 1, 0);
//	queue<int> q;
//	q.push(index);
//
//	while (!q.empty()) {
//		for (int i = 1; i < N + 1; i++) {
//			if (g[q.front()][i] == 1 && visited[i] == 0) {
//				q.push(i);
//				visited[i] = 1;
//			}
//		}
//		q.pop();
//		
//	}
//
//	return visited;
//}
//
//int main() {
//	int N; cin >> N;
//	vector<vector<int>> g(N + 1, vector<int>(N + 1));
//	for (int i = 1; i < N + 1; i++) {
//		for (int j = 1; j < N + 1; j++) {
//			cin >> g[i][j];
//		}
//	}
//
//	auto result = g;
//	for (int i = 1; i < N + 1; i++) {
//		result[i] = bfs(g, i);
//	}
//
//	for (int i = 1; i < N + 1; i++) {
//		for (int j = 1; j < N + 1; j++) {
//			cout << result[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}
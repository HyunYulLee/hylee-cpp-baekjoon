//#include <iostream>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//
//using namespace std;
//
//int main() {
//	int N, M; cin >> N >> M;
//	unordered_map<int, int> ladder;
//	unordered_map<int, int> snake;
//
//	for (int i = 0; i < N; i++) {
//		int start, end;
//		cin >> start >> end;
//		ladder[start] = end;
//	}
//	for (int i = 0; i < M; i++) {
//		int start, end;
//		cin >> start >> end;
//		snake[start] = end;
//	}
//
//	vector<int> visited(101);
//
//	queue<pair<int, int>> q; // (À§Ä¡, È½¼ö)
//	q.push({ 1, 0 }); visited[1] = true;
//	while (!q.empty()) {
//		auto f = q.front(); q.pop();
//		if (f.first == 100) {
//			cout << f.second;
//			break;
//		}
//
//		int nq = f.second + 1;
//		for (int i = 1; i <= 6; i++) {
//			int np = f.first + i;
//			if (np <= 100 && !visited[np]) {
//				if (ladder.count(np)) {
//					q.push({ ladder[np], nq });
//					visited[np] = true;
//				}
//				else if (snake.count(np)) {
//					q.push({ snake[np], nq });
//					visited[np] = true;
//				}
//				else {
//					q.push({ np, nq });
//					visited[np] = true;
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}
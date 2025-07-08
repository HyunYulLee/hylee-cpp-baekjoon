//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int dx[] = { 0, 0, -1,1 };
//int dy[] = { -1,1,0,0 };
//
//int count(vector<vector<int>> c, int x, int y) {
//	int result = 0;
//	auto campus = c;
//	int N = c.size(), M = campus[0].size();
//	vector<vector<bool>> visited(N, vector<bool>(M, false));
//	queue<pair<int, int>> q;
//	q.push({ x, y });
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx >= 0 && nx < N && 0 <= ny && ny < M) {
//				if (visited[nx][ny] == true) continue;
//				if (campus[nx][ny] == -1) continue;
//				else {
//					q.push({ nx, ny });
//					if (campus[nx][ny] == 2) {
//						result++;
//						campus[nx][ny] = 0;
//					}
//					visited[nx][ny] = true;
//				}
//			}
//		}
//	}
//	return result;
//}
//
//int main() {
//	int N, M; cin >> N >> M;
//	int x, y;
//	vector<vector<int>> campus(N, vector<int>(M));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			char k; cin >> k;
//			if (k == 'I') {
//				campus[i][j] = 1;
//				x = i; y = j;
//			}
//			else if (k == 'X') campus[i][j] = -1;
//			else if (k == 'P') campus[i][j] = 2;
//		}
//	}
//	
//	if (!count(campus, x, y)) cout << "TT";
//	else cout << count(campus, x, y);
//
//
//}
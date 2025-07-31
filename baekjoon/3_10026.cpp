//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int dx[] = { -1, 1, 0, 0 };
//int dy[] = { 0, 0, -1, 1 };
//
//vector<vector<bool>> check_area(const vector<vector<char>> &g, vector<vector<bool>> v, int x, int y) { // 한 영역 전체를 visited로 바꿔주는 함수
//	auto return_v = v;
//	int N = v.size();
//	queue<pair<int, int>> q;
//	q.push({ x, y }); return_v[x][y] = true;
//	char color = g[x][y];
//
//	while (!q.empty()) {
//		int fx = q.front().first, fy = q.front().second;
//		
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = fx + dx[i], ny = fy + dy[i];
//			if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//				if (return_v[nx][ny] || g[nx][ny] != color) continue;
//				q.push({nx, ny}); return_v[nx][ny] = true;
//			}
//		}
//	}
//
//	return return_v;
//}
//
//
//int bfs(const vector<vector<char>> &g) {
//	int N = g.size(), area = 0;
//	vector<vector<bool>> visited(N, vector<bool>(N));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!visited[i][j]) {
//				area++;
//				visited = check_area(g, visited, i, j);
//			}
//		}
//	}
//
//	return area;
//}
//
//int main() {
//	int N; cin >> N;
//	vector<vector<char>> grid(N, vector<char>(N));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf(" %c", &grid[i][j]);
//		}
//	}
//
//	auto rg_grid = grid;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (rg_grid[i][j] == 'G') rg_grid[i][j] = 'R';
//		}
//	}
//
//	cout << bfs(grid) << ' ' << bfs(rg_grid);
//}
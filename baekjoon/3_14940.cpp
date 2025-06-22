//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1,-1,0,0 };
//int n = 1;
//
//void bfs(vector<vector<int>> &map, vector<vector<int>> &result, int x, int y, int n) {
//	int x_size = map.size();
//	int y_size = map[0].size();
//
//	if (map[x][y] == 2) {
//		result[x][y] = 0;
//		map[x][y] = 0;
//	}
//	else if (map[x][y] == 1) { 
//		result[x][y] = n;
//		map[x][y] = 0; // 이미 조정한 곳은 더 못돌도록
//	}
//	else if (map[x][y] == 0 && result[x][y] > n) {
//		result[x][y] = n; // 최솟값 없데이트
//	}
//	else return;
//
//	for (int i = 0; i < 4; i++) {
//		int next_x = x + dx[i];
//		int next_y = y + dy[i];
//		if (next_x >= 0 && next_x < x_size && next_y >= 0 && next_y < y_size) {
//			bfs(map, result, next_x, next_y, n+1);
//		}
//	}
//}
//
//int main() {
//	int n, m; cin >> n >> m;
//	vector<vector<int>> map(n, vector<int>(m));
//	vector<vector<int>> result(n, vector<int>(m, 0));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 2) {
//				bfs(map, result, i, j, 0); break;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 1) result[i][j] = -1; // -1 케이스 처리
//			printf("%d ", result[i][j]);
//		}
//		printf("\n");
//	}
//
//}
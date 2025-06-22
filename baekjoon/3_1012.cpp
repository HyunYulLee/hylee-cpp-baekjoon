//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//int M, N, K;
//
//vector<vector<int>> flood_fill(vector<vector<int>> farm, int x, int y) {
//	farm[x][y]++;
//	for (int i = 0; i < 4; i++) {
//		if (x + dx[i] >= 0 && x + dx[i] < N && y + dy[i] >= 0 && y + dy[i] <= M) {
//			if (farm[x + dx[i]][y + dy[i]] == 1) {
//				farm = flood_fill(farm, x + dx[i], y + dy[i]);
//			}
//		}
//	}
//	return farm;
//}
//int main() {
//	int T; cin >> T;
//	while (T--) {
//		vector<vector<int>> farm(51, vector<int>(51, 0));
//		cin >> M >> N >> K;
//		int x, y;
//		int count = 0;
//		while (K--) {
//			cin >> x >> y;
//			farm[y][x] = 1;
//		}
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (farm[i][j] != 1) continue;
//				farm = flood_fill(farm, i, j); 
//				count++;
//			}
//		}
//		cout << count << '\n';
//	}
//}
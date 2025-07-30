//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct State {
//	int h, n, m, day;
//};
//
//int dx[] = { -1, 1, 0, 0, 0, 0 };
//int dy[] = { 0, 0, -1, 1, 0, 0 };
//int dz[] = { 0, 0, 0, 0, -1, 1 };
//
//int cal_date(const vector<vector<vector<int>>>& t) {
//	int result = -1;
//	queue<State> q;
//	auto farm = t;
//	int H = t.size(), N = t[0].size(), M = t[0][0].size();
//	vector<vector<vector<bool>>> visited(H, vector<vector<bool>>(N, vector<bool>(M)));
//	bool zero_case = true;
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				if (t[i][j][k] == 1) {
//					State tomato; tomato.day = 0; tomato.h = i; tomato.n = j; tomato.m = k; 
//					q.push(tomato);
//					visited[i][j][k] = true;
//				}
//				else if (t[i][j][k] == 0) {
//					zero_case = false;
//				}
//				else { // -1인 경우
//					visited[i][j][k] = true;
//				}
//			}
//		}
//	}
//	if (zero_case) return 0; // 이미 모든 토마토가 익어있을 경우
//	
//	while (!q.empty()) {
//
//		result = q.front().day;
//		for (int i = 0; i < 6; i++) {
//			int nh = q.front().h + dz[i];
//			int nx = q.front().n + dx[i];
//			int ny = q.front().m + dy[i];
//			if (nh >= 0 && nh < H && nx >= 0 && nx < N && ny >= 0 && ny < M) {
//				if (visited[nh][nx][ny]) continue;
//				visited[nh][nx][ny] = true;
//				farm[nh][nx][ny] = 1; // 0인 경우밖에 안 남으므로 추가 조건 없이 토마토로 바꿔줌
//				State tomato; tomato.day = q.front().day + 1; tomato.h = nh; tomato.n = nx; tomato.m = ny;
//				q.push(tomato);
//			}
//		}
//		q.pop();
//	}
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				if (farm[i][j][k] == 0) {
//					result = -1; break;
//				}
//			}
//		}
//	}
//
//	return result;
//
//
//}
//
//int main() {
//	int M, N, H; cin >> M >> N >> H;
//	vector<vector<vector<int>>> tomato(H, vector<vector<int>>(N, vector<int>(M)));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				cin >> tomato[i][j][k];
//			}
//		}
//	}
//
//	int date = cal_date(tomato);
//	cout << date;
//
//}
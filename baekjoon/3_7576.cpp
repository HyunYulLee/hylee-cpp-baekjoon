//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//	
//typedef struct {
//	int x;
//	int y;
//	int day;
//}xy;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	cin >> M >> N;
//	int total = N * M;
//	int totalDay;
//
//	vector<vector<int>> tomato(N, vector<int>(M));
//	queue<xy> q;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//
//			cin >> tomato[i][j];
//			if (tomato[i][j] == 1) {
//				xy qxy;
//				qxy.x = j;
//				qxy.y = i;
//				qxy.day = 0;
//				q.push(qxy);
//				total--;
//			}
//
//			if (tomato[i][j] == -1) total--;
//
//		}
//	}
//
//	while (!q.empty()) {
//		xy i = q.front();
//		q.pop();
//		totalDay = i.day;
//		
//		vector<int> X = { -1, 1, 0, 0 };
//		vector<int> Y = { 0, 0, -1, 1 };
//		for (int k = 0; k < 4; k++) {
//			xy pushing = i;
//			pushing.x += X[k];
//			pushing.y += Y[k];
//			pushing.day++;
//			
//			if (pushing.x < 0 || pushing.x >= M || pushing.y < 0 || pushing.y >= N) continue;
//			else if (tomato[pushing.y][pushing.x] == 0) { 
//				q.push(pushing);
//				tomato[pushing.y][pushing.x] = 1;
//				total--;
//			}
//		}
//	}
//
//	if (total == 0) cout << totalDay;
//	else cout << "-1";
//
//
//
//
//
//}
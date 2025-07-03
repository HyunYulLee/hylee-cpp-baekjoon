//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stdlib.h>
//
//using namespace std;
//
//int dx[] = {0, 0, -1, 1};
//int dy[] = {1, -1, 0, 0};
//
//struct State {
//	int rx, ry, bx, by, depth;
//};
//
//auto rolling(const vector<vector<int>>& board, pair<int, int> red, pair<int, int> blue) {
//	int N = board.size();
//	int M = board[0].size();
//	vector<vector<vector<vector<bool>>>> visited(N, vector<vector<vector<bool>>>(M, vector<vector<bool>>(N, vector<bool>(M, false))));
//	queue<State> q;
//	q.push({ red.first, red.second, blue.first, blue.second, 0 });
//	visited[red.first][red.second][blue.first][blue.second] = true;
//
//	while (!q.empty()) {
//		int rx = q.front().rx;
//		int ry = q.front().ry;
//		int bx = q.front().bx;
//		int by = q.front().by;
//		int depth = q.front().depth;
//		q.pop();
//		if (depth > 9) return -1;
//		for (int dir = 0; dir < 4; dir++) {
//			int nrx = rx, nry = ry, r_move = 0;
//			while (board[nrx + dx[dir]][nry + dy[dir]] != -1 && board[nrx][nry] != 1) {
//				nrx += dx[dir]; nry += dy[dir]; r_move++;
//				if (board[nrx][nry] == 1) break;
//			}
//
//			int nbx = bx, nby = by, b_move = 0;
//			while (board[nbx + dx[dir]][nby + dy[dir]] != -1 && board[nbx][nby] != 1) {
//				nbx += dx[dir]; nby += dy[dir]; b_move++;
//				if (board[nbx][nby] == 1) break;
//			}
//
//			if (board[nbx][nby] == 1) continue;
//			if (board[nrx][nry] == 1) return depth + 1;
//
//			if (nrx == nbx && nry == nby) {
//				if (r_move > b_move) {
//					nrx -= dx[dir]; nry -= dy[dir];
//				}
//				else {
//					nbx -= dx[dir]; nby -= dy[dir];
//				}
//			}
//
//			if (!visited[nrx][nry][nbx][nby]) {
//				visited[nrx][nry][nbx][nby] = true;
//				q.push({ nrx, nry, nbx, nby, depth + 1 });
//			}
//		}
//		
//	}
//
//	return -1;
//
//}
//
//int main() {
//	int N, M; cin >> N >> M;
//	vector<vector<int>> board(N, vector<int>(M));
//	// 좌표 저장
//	pair<int, int> red; pair<int, int> blue; pair<int, int> hole;
//	// board 입력
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			char input;	cin >> input;
//			if (input == '#') board[i][j] = -1; // wall
//			else if (input == 'O') {
//				board[i][j] = 1; // hole
//				hole = { i, j };
//			}
//			else if (input == 'R') {
//				board[i][j] = 2; // red
//				red = { i, j };
//			}
//			else if (input == 'B') {
//				board[i][j] = 3; // blue
//				blue = { i, j };
//			}
//			else {
//				board[i][j] = 0; // route
//			}
//		}
//	}
//
//	cout << rolling(board, red, blue);
//
//
//
//
//}
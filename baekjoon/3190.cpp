//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//
//using namespace std;
//
//int dx[] = { -1, 1, 0, 0 };
//int dy[] = { 0, 0, -1, 1 };
//
//struct State {
//	int hx, hy, tx, ty; // snake의 head/tail 좌표
//	int time, dir; // 시간, 방향 (0: 상 1: 하 2: 좌 3: 우)
//};
//
//int start(vector<vector<int>> b, vector<int> t) {
//	auto board = b;
//	queue<State> q;
//	State init; init.time = 0; init.tx = 1; init.ty = 1; init.hx = 1; init.hy = 1; init.dir = 3;
//	q.push(init);
//
//	while (!q.empty()) {
//		auto front = q.front(); q.pop();
//		if (t[front.time] == 1) { // 좌로 꺾을 때
//			if (front.dir == 0) front.dir = 2;
//			else if (front.dir == 1) front.dir = 3;
//			else if (front.dir == 2) front.dir = 1;
//			else front.dir = 0;
//		}
//		else if (t[front.time] == 2) { // 우로 꺾을 때
//			if (front.dir == 0) front.dir = 3;
//			else if (front.dir == 1) front.dir = 2;
//			else if (front.dir == 2) front.dir = 0;
//			else front.dir = 1;
//		}
//		State ns;
//		ns.dir = front.dir; // 바뀐 값으로 방향 설정
//		int nhx = front.hx + dx[front.dir], nhy = front.hy + dy[front.dir];
//		if (nhx <= 0 || nhx >= board.size() || nhy <= 0 || nhy >= board.size()) { // 벽에 충돌
//			return front.time + 1;
//		}
//
//		int next = board[nhx][nhy];
//		if (next == -1) { // 빈칸
//			board[nhx][nhy] = front.time + 1; // 전진
//			ns.time = front.time + 1;
//			ns.hx = nhx; ns.hy = nhy;
//			for (int i = 0; i < 4; i++) { // 다음 tail값 넘기기
//				if (front.tx + dx[i] >= 1 && front.tx + dx[i] <= board.size()-1 && front.ty + dy[i] >= 1 && front.ty + dy[i] <= board.size()-1) {
//					if (board[front.tx + dx[i]][front.ty + dy[i]] == board[front.tx][front.ty] + 1) {
//						ns.tx = front.tx + dx[i]; ns.ty = front.ty + dy[i];
//					}
//				}
//			}
//			board[front.tx][front.ty] = -1;
//		}
//		else if (next == -2) { // 사과
//			board[nhx][nhy] = front.time + 1;
//			ns.time = front.time + 1;
//			ns.hx = nhx; ns.hy = nhy;
//			ns.tx = front.tx; ns.ty = front.ty;
//		}
//		else { // 자기 자신에 충돌
//			return front.time + 1;
//		}
//		q.push(ns);
//	}
//
//
//
//}
//
//int main() {
//	int N, K, L; 
//	cin >> N >> K;
//	vector<vector<int>> board(N + 1, vector<int>(N + 1, -1));
//	board[1][1] = 0; // time 0의 뱀 위치
//	for (int i = 0; i < K; i++) {
//		int x, y; cin >> x >> y;
//		board[x][y] = -2; // 사과
//	}
//	cin >> L;
//	vector<int> turn(10001);
//	for (int i = 0; i < L; i++) {
//		int X; char C;
//		cin >> X >> C;
//		if (C == 'L') turn[X] = 1; // 1 왼쪽
//		else turn[X] = 2;// 2 오른쪽
//	}
//
//	int time = start(board, turn);
//	cout << time;
//
//}
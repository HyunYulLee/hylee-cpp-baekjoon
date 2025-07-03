//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//
//using namespace std;
//
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { -1, 1, 0, 0 };
//
//struct state {
//	vector<vector<int>> board_;	
//	int depth;
//};
//
//int find_max(state x) {
//	int size = x.board_.size();
//	int max = 0;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (max < x.board_[i][j]) max = x.board_[i][j];
//		}
//	}
//	return max;
//}
//
//auto slide_left(state x, int size) {
//	vector<vector<bool>> combined(size, vector<bool>(size));
//	state nx;
//	auto &b = x.board_;
//	for (int i = 0; i < size; i++) {
//		for (int j = 1; j < size; j++) { // �� ������ �����̹Ƿ� 1���� ����
//			int nj = j;
//			int num = b[i][j];
//			while (1) {
//				if (b[i][nj - 1] == 0) { // ��ĭ�� ���
//					b[i][nj - 1] = num;	
//					b[i][nj] = 0; // ���� ����� ���� ������ �ݺ�
//					nj--;
//					if (nj - 1< 0) break;
//				}
//				else if (!combined[i][nj - 1] && b[i][nj - 1] == num) { // ���� ���
//					b[i][nj - 1] = num * 2;
//					combined[i][nj - 1] = 1;
//					b[i][nj] = 0;
//					break;
//				}
//				else { // �ٸ� ���
//					break; 
//				}
//			}
//		}
//	}
//	nx.board_ = b;
//	nx.depth = x.depth + 1;
//	return nx;
//}
//auto slide_right(state x, int size) {
//	vector<vector<bool>> combined(size, vector<bool>(size));
//	state nx;
//	auto& b = x.board_;
//	for (int i = 0; i < size; i++) {
//		for (int j = size - 2; j >= 0; j--) { // �� �������� �����̹Ƿ� size - 2����
//			int nj = j;
//			int num = b[i][j];
//			while (1) {
//				if (b[i][nj + 1] == 0) { // ��ĭ�� ���
//					b[i][nj + 1] = num;
//					b[i][nj] = 0; // ���� ����� ���� ������ �ݺ�
//					nj++;
//					if (nj + 1> size - 1) break;
//				}
//				else if (!combined[i][nj + 1] && b[i][nj + 1] == num) { // ���� ���
//					b[i][nj + 1] = num * 2;
//					combined[i][nj + 1] = 1;
//					b[i][nj] = 0;
//					break;
//				}
//				else { // �ٸ� ���
//					break;
//				}
//			}
//		}
//	}
//	nx.board_ = b;
//	nx.depth = x.depth + 1;
//	return nx;
//}
//auto slide_up(state x, int size) {
//	vector<vector<bool>> combined(size, vector<bool>(size));
//	state nx;
//	auto& b = x.board_;
//	for (int j = 0; j < size; j++) {
//		for (int i = 1; i < size; i++) { // �� ���� �����̹Ƿ� 1���� ����
//			int ni = i;
//			int num = b[i][j];
//			while (1) {
//				if (b[ni - 1][j] == 0) { // ��ĭ�� ���
//					b[ni - 1][j] = num;
//					b[ni][j] = 0; // ���� ����� ���� ������ �ݺ�
//					ni--;
//					if (ni - 1< 0) break;
//				}
//				else if (!combined[ni - 1][j] && b[ni - 1][j] == num) { // ���� ���
//					b[ni - 1][j] = num * 2;
//					combined[ni - 1][j] = 1;
//					b[ni][j] = 0;
//					break;
//				}
//				else { // �ٸ� ���
//					break;
//				}
//			}
//		}
//	}
//	nx.board_ = b;
//	nx.depth = x.depth + 1;
//	return nx;
//}
//auto slide_down(state x, int size) {
//	vector<vector<bool>> combined(size, vector<bool>(size));
//	state nx;
//	auto& b = x.board_;
//	for (int j = 0; j < size; j++) {
//		for (int i = size - 2; i >= 0; i--) { // �� �Ʒ��� �����̹Ƿ� size - 2����
//			int ni = i;
//			int num = b[i][j];
//			while (1) {
//				if (b[ni + 1][j] == 0) { // ��ĭ�� ���
//					b[ni + 1][j] = num;
//					b[ni][j] = 0; // ���� ����� ���� ������ �ݺ�
//					ni++;
//					if (ni + 1> size - 1) break;
//				}
//				else if (!combined[ni + 1][j] && b[ni + 1][j] == num) { // ���� ���
//					b[ni + 1][j] = num * 2;
//					combined[ni + 1][j] = 1;
//					b[ni][j] = 0;
//					break;
//				}
//				else { // �ٸ� ���
//					break;
//				}
//			}
//		}
//	}
//	nx.board_ = b;
//	nx.depth = x.depth + 1;
//	return nx;
//}
//
//int main() {
//	int N; cin >> N;
//	vector<vector<int>> board(N, vector<int>(N));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> board[i][j];
//		}
//	}
//	
//	queue<state> q;
//	state initial;
//	initial.board_ = board; initial.depth = 0;
//	q.push(initial);
//	set<int> biggest;
//
//	while (!q.empty()) {
//		state front = q.front();
//		q.pop();
//		if (front.depth == 5) {
//			biggest.insert(find_max(front));
//			continue;
//		}
//
//		q.push(slide_up(front, N)); 
//		q.push(slide_down(front, N));
//		q.push(slide_left(front, N));
//		q.push(slide_right(front, N));
//
//	}
//	
//	auto it = biggest.end();
//	it--;
//	cout << *it;
//}
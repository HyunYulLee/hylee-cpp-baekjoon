//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int blue = 0;
//int white = 0;
//
//void is_same_color(const vector<vector<int>>& paper, int N, int x, int y) {
//	if (N == 0) return;
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			sum += paper[x + i][y + j];
//		}
//	}
//	if (sum == 0) {
//		white++; // white 발견
//		return;
//	}
//	if (sum == (N*N)) {
//		blue++; // blue 발견
//		return;
//	}
//	int half = N / 2;
//	is_same_color(paper, half, x, y);
//	is_same_color(paper, half, x+half, y);
//	is_same_color(paper, half, x, y+half);
//	is_same_color(paper, half, x+half, y+half);
//
//}
//
//int main() {
//	int N; cin >> N;
//	vector<vector<int>> paper(N, vector<int>(N, 0));
//	int input;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> input;
//			if (input == 1) paper[i][j] = 1;
//		}
//	}
//
//	is_same_color(paper, N, 0, 0);
//	cout << white << '\n' << blue;
//}
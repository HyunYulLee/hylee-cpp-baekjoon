//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N, M, B;
//	cin >> N >> M >> B;
//	vector<vector<int>> blocks(N, vector<int>(M));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> blocks[i][j];
//		}
//	}
//
//	vector<long long> times(257, 1e18);
//	for (int i = 0; i < 257; i++) {
//		int k = i, time = 0, item = B;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (k == blocks[i][j]) continue;
//				else if (k < blocks[i][j]) { // 블록 제거
//					int n = blocks[i][j] - k;
//					time += 2 * n; item += n;
//				}
//				else { // 블록 설치
//					int n = k - blocks[i][j];
//					time += n; item -= n;
//				}
//			}
//		}
//
//		if (item < 0) continue; // 블록을 초과해서 사용한 경우 (불가능한 경우)
//		else {
//			times[i] = time;
//		}
//	}
//
//	int min_time = times[0], max_height = 0;
//	for (int i = 0; i < 257; i++) {
//		if (min_time >= times[i]) {
//			min_time = times[i];
//			max_height = i;
//		}
//	}
//
//	cout << min_time << ' ' << max_height;
//
//}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void count_dfs(vector<vector<int>>& graph, int num_of_edge, int x, int y) {
//	graph[x][y] = 2; // visited�� �ǹ� 2
//	graph[y][x] = 2;
//	for (int i = 1; i <= num_of_edge; i++) {
//		if (graph[x][i] == 1) {
//			count_dfs(graph, num_of_edge, x, i);
//		}
//		if (graph[y][i] == 1) {
//			count_dfs(graph, num_of_edge, y, i);
//		}
//	}
//}
//
//int main() {
//	int N, M; cin >> N >> M;
//	if (M == 0) {
//		cout << N;
//		return 0;
//	}
//	int count = 0;
//	vector<vector<int>> graph(N + 1, vector<int>(N + 1, 0)); // ���Ǹ� ���� index 0 �� �����
//	vector<int> solo_vertax(N + 1, 1); // ������ ǥ���ϴ� ����. -> ������ �Ҹ� ������ üũ�Ͽ� ������ �Ҹ��� ���� ������ �����.
//	solo_vertax[0] = 0;
//;	while (M--) {
//		int x, y;
//		cin >> x >> y;
//		graph[x][y] = 1; // ������ �����Ѵٴ� �ǹ� 1
//		graph[y][x] = 1; // �������̹Ƿ� �Ѵ� ǥ�����ֱ�
//		solo_vertax[x] = 0;
//		solo_vertax[y] = 0;
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (graph[i][j] == 1) {
//				count++;
//				count_dfs(graph, N, i, j);
//			}
//		}
//	}
//	for (auto i : solo_vertax) {
//		if (i == 1) count++; // ������ ���� ������ ���̽�
//	}
//	
//	cout << count;
//}
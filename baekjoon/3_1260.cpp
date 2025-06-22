//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//void dfs(const vector<vector<int>>& graph, vector<bool>& visited, int V) {
//	cout << V << ' ';
//	visited[V] = true;
//	for (int i = 1; i < graph[V].size(); i++) {
//		if (graph[V][i] == 1 && !visited[i]) {
//			visited[i] = true;
//			dfs(graph, visited, i);
//		}
//	}
//}
//
//void bfs(const vector<vector<int>>& graph, int V) {
//	queue<int> q;
//	vector<bool> visited(graph.size(), false);
//	cout << V << ' '; 
//	visited[V] = true;
//	for (int i = 1; i < graph[V].size(); i++) {
//		if (graph[V][i] == 1) {
//			q.push(i);
//			visited[i] = true;
//		}
//	}
//	while (!q.empty()) {
//		int pop = q.front();
//		cout << pop << ' '; q.pop();
//		for (int i = 1; i < graph[pop].size(); i++) {
//			if (graph[pop][i] == 1 && !visited[i]) {
//				q.push(i);
//				visited[i] = true;
//			}
//		}		
//	}
//}
//
//int main() {
//	int N, M, V;
//	cin >> N >> M >> V;
//	vector<vector<int>> graph(N + 1, vector<int>(N + 1, 0));
//	while (M--) {
//		int x, y;
//		cin >> x >> y;
//		graph[x][y] = 1;
//		graph[y][x] = 1;
//	}
//	vector<bool> visited(N + 1, false);
//	dfs(graph, visited, V);
//	cout << '\n';
//	bfs(graph, V);
//}
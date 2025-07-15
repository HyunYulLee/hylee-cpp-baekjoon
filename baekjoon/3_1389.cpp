#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int bfs(const vector<vector<int>>& g, int user) {
	int start = user;
	vector<bool> visited(g.size(), false);
	vector<bool> dist(g.size());
	queue<pair<int, int>> q; // ³ëµå, ±íÀÌ
	q.push({ start, 0 }); 
	visited[start] = true;
	int sum = 0;

	while (!q.empty()) {
		auto curr = q.front(); q.pop();
		sum += curr.second;
		for (int next : g[curr.first]) {
			if (visited[next] == false) {
				q.push({ next, curr.second + 1 });
				visited[next] = true;
			}
		}
	}

	return sum;	
}

int main() {
	int N, M; cin >> N >> M;
	vector<vector<int>> graph(N + 1);
	for (int i = 0; i < M; i++) {
		int u, v; cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	multiset<pair<int, int>> users;
	
	for (int i = 1; i <= N; i++) {
		users.insert({ bfs(graph, i) , i});
	}

	auto p = *users.begin();
	cout << p.second;
	
}
#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int D(int x) {
	int res;
	res = (x * 2) % 10000;
	return res;
}

int S(int x) {
	int res;
	res = x - 1;
	if (res == -1) res = 9999;
	return res;
}

int L(int x) {
	int res;
	int d1, d2, d3, d4;
	if (x >= 1000) {
		d1 = x / 1000; x -= d1 * 1000;
	}
	else d1 = 0;
	if (x >= 100) {
		d2 = x / 100; x -= d2 * 100;
	}
	else d2 = 0;
	if (x >= 10) {
		d3 = x / 10; x -= d3 * 10;
	}
	else d3 = 0;
	d4 = x;

	res = ((d2 * 10 + d3) * 10 + d4) * 10 + d1;
	return res;
}

int R(int x) {
	int res;
	int d1, d2, d3, d4;
	if (x >= 1000) {
		d1 = x / 1000; x -= d1 * 1000;
	}
	else d1 = 0;
	if (x >= 100) {
		d2 = x / 100; x -= d2 * 100;
	}
	else d2 = 0;
	if (x >= 10) {
		d3 = x / 10; x -= d3 * 10;
	}
	else d3 = 0;
	d4 = x;

	res = ((d4 * 10 + d1) * 10 + d2) * 10 + d3;
	return res;
}

int main() {
	int T; cin >> T;
	while (T--) {
		queue<pair<int, string>> q;
		vector<bool> visited(10000);
		int s, e; cin >> s >> e;
		q.push({ s, "" });

		while (!q.empty()) {
			auto f = q.front(); q.pop();
			if (f.first == e) { // ¹ß°ß
				cout << f.second << "\n";
				break;
			}
			int nd = D(f.first), ns = S(f.first), nl = L(f.first), nr = R(f.first);
			pair<int, string> d = { D(f.first), f.second + "D" };
			pair<int, string> s = { S(f.first), f.second + "S" };
			pair<int, string> l = { L(f.first), f.second + "L" };
			pair<int, string> r = { R(f.first), f.second + "R" };
			if (!visited[nd]) {
				q.push(d); visited[nd] = true;
			}
			if (!visited[ns]) {
				q.push(s); visited[ns] = true;
			}
			if (!visited[nl]) {
				q.push(l); visited[nl] = true;
			}
			if (!visited[nr]) {
				q.push(r); visited[nr] = true;
			}
		}
	}
}
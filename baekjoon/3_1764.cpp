//#include <iostream>
//#include <cstring>
//#include <set>
//
//using namespace std;
//
//class Trie {
//	Trie* next[26];
//	bool finished;
//
//public:
//	Trie() {
//		finished = 0;
//		memset(next, 0, sizeof(next));
//	}
//	void insert(char* str) {
//		if (*str == '\0') this->finished = 1;
//		else {
//			int curr = *str - 'a';
//			if (next[curr] == NULL) next[curr] = new Trie();
//			next[curr]->insert(str + 1);
//		}
//	}
//
//	bool find(char* str) {
//		if (*str == '\0') return finished;
//		int curr = *str - 'a';
//		if (next[curr] == NULL) return 0; // 찾지 못함
//		else return next[curr]->find(str + 1);
//	}
//};
//
//
//int main() {
//	Trie t;
//	int N, M; cin >> N >> M;
//	int count = 0;
//	set<string> s_set;
//
//	for (int i = 0; i < N; i++) {
//		char x[21]; cin >> x;
//		t.insert(x);
//	}
//	for (int i = 0; i < M; i++) {
//		char y[21]; cin >> y;
//		if (t.find(y)) {
//			count++;
//			s_set.insert(y);
//		}
//	}
//
//	cout << count << '\n';
//	for (auto i = s_set.begin(); i != s_set.end(); i++) {
//		cout << *i << '\n';
//	}
//	return 0;
//}

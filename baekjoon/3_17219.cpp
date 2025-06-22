//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int N, M; cin >> N >> M;
//	unordered_map<string, string> m;
//	while (N--) {
//		string site;
//		string password;
//		cin >> site >> password;
//		m.emplace(site, password);
//	}
//
//	vector<string> result;
//	while (M--) {
//		string input; cin >> input;
//		result.emplace_back(m.at(input));
//	}
//	for (auto i : result) cout << i << '\n';
//}
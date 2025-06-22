//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N, M; cin >> N >> M;
//	map<int, string> guide;
//	map<string, int> guide2;
//	for (int i = 1; i <= N; i++) {
//		char pokemon[21];
//		cin >> pokemon;
//		guide.emplace(i, pokemon);
//		guide2.emplace(pokemon, i);
//	}
//
//	vector<string> result;
//	while (M--) {
//		string input;
//		cin >> input;
//		// int or char
//		if (int(input[0]) >= 48 && int(input[0]) <= 57) { // if int
//			result.push_back(guide[stoi(input)]);
//		}
//		else {
//			result.push_back(to_string(guide2.at(input))); // if char
//		}
//	}
//	
//	for (auto i : result) cout << i << '\n';
//	
//}
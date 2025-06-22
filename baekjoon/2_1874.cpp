//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//stack<int> s;
//vector<int> v;
//vector<char> result;
//
//int main() {
//	int number = 1; int index = 0;
//	int n; cin >> n; int k;
//	for (int i = 0; i < n; i++) {
//		cin >> k; v.emplace_back(k);
//	}
//
//	while (1) {
//
//		if (index == n) {
//			for (auto i = 0; i < result.size(); i++) {
//				cout << result[i] << '\n';
//			}
//			return 0;
//		}
//		if (s.empty() || v[index] > s.top()) {
//			s.push(number++); result.emplace_back('+');
//		}
//		else if (v[index] == s.top()) {
//			s.pop(); result.emplace_back('-'); index++;
//		}
//		else {
//			while (s.top() != v[index]) {
//				s.pop(); result.emplace_back('-');
//				if (s.empty()) {
//					cout << "NO"; return 0;
//				}
//			}
//		}
//	}
//}
//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	int T; int n;
//	cin >> T;
//	while (T--) {
//		map<string, int> closet;
//		cin >> n;
//		int k = 1;
//		while (n--) {
//			string input1;
//			string input2;
//			cin >> input1 >> input2;
//			closet[input2]++;
//		}
//
//		for (const auto& i : closet) {
//			k *= (i.second + 1);
//		}
//		cout << k - 1 << '\n';
//	}
//}
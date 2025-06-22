//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	vector<vector<int>> apartment(16, vector<int>(16, 0));
//
//	// 0층 초기화
//	for (int i = 0; i < 15; i++) {
//		apartment[0][i] = i;
//	}
//
//	// 1~14층 초기화
//	for (int i = 1; i < 15; i++) {
//		// apartment[i] = apartment[i-1]의 누적합 
//		for (int j = 1; j < 15; j++) {
//			apartment[i][j] = apartment[i][j - 1] + apartment[i-1][j];
//		}
//	}
//	
//	int test_case;
//	cin >> test_case;
//
//	while (test_case--) {
//		int floor, address;
//		cin >> floor >> address;
//		cout << apartment[floor][address] << "\n";
//	}
//}
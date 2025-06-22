//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	int N;
//	vector<int> counting_vector(10001, 0);
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		int input;
//		cin >> input;
//		counting_vector[input]++;
//	}
//
//	for (int i = 0; i < 10001; i++) {
//		while (counting_vector[i] != 0) {
//			cout << i << "\n";
//			counting_vector[i]--;
//		}
//	}
//}
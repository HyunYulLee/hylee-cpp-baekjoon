//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, k;
//	cin >> N;
//	int num1 = 2;
//	int num2 = 8;
//
//	if (N == 1) {
//		k = 1;
//		cout << k;
//	}
//	else {
//		for (k = 2; ; k++) {
//			if (num1 <= N && N < num2) {
//				break;
//			}
//			num1 = num2;
//			num2 += 6 * (k);
//		}
//		cout << k;
//	}
//}
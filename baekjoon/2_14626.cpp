//#include <iostream>
//using namespace std;
//
//int main() {
//	char input[14];
//	int total = 0; int k = 0; int j;
//	cin >> input;
//
//	for (int i = 0; i < 13; i++) {
//		if (input[i] == '*') {
//			for (j = 0; j < 10; j++) {
//				input[i] = j + '0';
//				int sum =
//					(input[0] - '0') +
//					(input[1] - '0') * 3 +
//					(input[2] - '0') +
//					(input[3] - '0') * 3 +
//					(input[4] - '0') +
//					(input[5] - '0') * 3 +
//					(input[6] - '0') +
//					(input[7] - '0') * 3 +
//					(input[8] - '0') +
//					(input[9] - '0') * 3 +
//					(input[10] - '0') +
//					(input[11] - '0') * 3;
//				
//				int m = (10 - (sum % 10)) % 10;
//					if (m == input[12] - '0') {
//					cout << j;
//					return 0;
//				}
//			}
//		}
//	}
//
//}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int digitSum(int k) {
//	int sum = 0;
//	while (k != 0) {
//		sum += k % 10;
//		k /= 10;
//	}
//	return sum;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int target_number;
//	cin >> target_number;
//	int contructor = 0;
//
//	for (int i = 1; i <= target_number; i++) { // i�� 1���� N����
//		if (i + digitSum(i) == target_number) {	// i�� ������ == N
//			contructor = i;
//			break;
//		}
//	}
//
//	cout << contructor;
//
//}
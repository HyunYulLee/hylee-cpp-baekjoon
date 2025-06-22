//#include <iostream>
//#include <string>
//#include <cmath>
//#define M 1234567891
//
//using namespace std;
//
//int cpow(int num) {
//	long long result = 1;
//	for (int i = 0; i < num; i++) {
//		result *= 31;
//		result %= M;
//	}
//	return result;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int length;
//	cin >> length;
//
//	string str;
//	cin >> str;
//
//	long long total_hash = 0;
//
//	for (int i = 0; i < length; i++) {
//
//		long long temp = str[i] - 'a' + 1;
//		long long individual_hash = (temp * cpow(i))%M;
//		total_hash += individual_hash;
//		total_hash %= M;
//	}
//
//	std::cout << total_hash << "\n";
//
//
//}
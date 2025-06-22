//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//
//	long long k, n; 
//	cin >> k >> n;
//	multiset<long long, greater<long long>> LAN_set; 
//	long long LAN_input;
//
//	for (int i = 0; i < k; i++) {
//		cin >> LAN_input;
//		LAN_set.insert(LAN_input);
//	}
//
//	long long high_length = *LAN_set.begin();
//	long long length;
//	long long low_length = 1;
//	long long num_of_LANs = 0;
//	long long result;
//	
//	set<long long>::iterator iter;
//
//	while (low_length <= high_length) {
//		length = (low_length + high_length) / 2;
//
//		num_of_LANs = 0;
//		num_of_LANs = 0;
//		for (iter = LAN_set.begin(); iter != LAN_set.end(); iter++) {
//			num_of_LANs += *iter / length;
//		}
//
//		if (num_of_LANs < n) {
//			high_length = length - 1;
//		}
//		else {
//			low_length = length + 1;
//			result = length; // ÀúÀå
//		} 
//	}
//
//
//	cout << result;
//
//}
//#include <iostream>
//#include <set>
//#include <string>
//#include <iterator>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	int count = 1;
//	int N;
//	cin >> N;
//	set<int> sixset;
//
//	for (int i = 0; i < 10000; i++) {
//		int sss = i*1000 + 666;
//		sixset.insert(sss);
//	}
//	for (int i = 0; i < 10; i++) {
//		int sss = 6660 + i;
//		for (int j = 0; j < 1000; j++) {
//			sixset.insert(sss);
//			sss += 10000;
//		}
//	}
//	for (int i = 0; i < 100; i++) {
//		int sss = 66600 + i;
//		for (int j = 0; j < 100; j++) {
//			sixset.insert(sss);
//			sss += 100000;
//		}
//	}
//	for (int i = 0; i < 1000; i++) {
//		int sss = 666000 + i;
//		for (int j = 0; j < 1000; j++) {
//			sixset.insert(sss);
//			sss += 1000000;
//		}
//	}
//
//	for (int i : sixset) {
//		if (count == N) {
//			cout << i;
//			break;
//		}
//		count++;
//	}
//
//
//
//
//}
//

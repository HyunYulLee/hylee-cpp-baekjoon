//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define hash 100000007
//using namespace std;
//
//long long two_power(long long n) {
//	int two = 1;
//	for (int i = 0; i < n; i++) {
//		two *= 2;
//		two %= hash;
//	}
//	return two;
//}
//
///*
//1 4 7 10 13 16 19 22
//
//	4-1 7-1*2 10-1*4 13-1*8 16-1*16 19-1*32 22-1*64
//	7-4 10-4*2 13-4*4 16-4*8 19-4*16 22-4*32
//	10-7 13-7*2 16-7*4 19-7*8 22-7*16
//	13-10 16-10*2 19-10*4 22-10*8
//	16-13 19-13*2 22-13*4
//	19-16 22-16*2
//	22-19
//
//	4-1 7-1*2 10-1*4 13-1*8 16-1*16 19-1*32
//	7-4 10-4*2 13-4*4 16-4*8 19-4*16 
//	10-7 13-7*2 16-7*4 19-7*8 
//	13-10 16-10*2 19-10*4 
//	16-13 19-13*2 
//	19-16 
//
//	19-1
//	(19+16)-(4+1)*2
//	(19+16+13)-(7+4+1)*4
//	(19+16+13)-(7+4+1)*8
//	(19+16)-(4+1)*16
//	19-1 * 32
//
//	22-1
//	(22+19)-(1+4) * 2
//	(22+19+16)-(1+4+7) * 4
//	(22+19+16+13)-(1+4+7+10) * 8
//	(22+19+16)-(1+4+7) * 16	
//	(22+19)-(1+4) * 32
//	22-1 * 64
//	*/
//
//int main() {
//	vector<long long> spicy;
//	vector<long long> spicy2;
//	vector<long long> two_p;
//	long long N; cin >> N;
//	for (int i = 0; i < N; i++) {
//		long long input;
//		spicy.push_back(input);
//	}
//	sort(spicy.begin(), spicy.end());
//
//	for (int i = 0; i < N/2; i++) {
//		if (i == N - 1 - i) { // N이 홀수의 경우
//			int p = spicy[i];
//			// p %= hash;
//			spicy2.push_back(p);
//		}
//		int p = spicy[i] - spicy[N - 1 - i]; // 첫 값과 끝 값의 차
//		// p %= hash;
//		spicy2.push_back(p);
//	}
//
//	for (int i = 0; i < N; i++) {
//		two_p.push_back(two_power(N / 2 - 1));
//	}
//
//
//
//
//}						
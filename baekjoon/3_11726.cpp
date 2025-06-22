//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int>ff(1001, -1);
//
//int mod(int x) {
//	return x % 10007;
//}
//
//int fibonnaci(int x) {
//	if (x <= 3) return ff[x] = x;
//	else {
//		if (ff[x] == -1) return ff[x] = mod(mod(fibonnaci(x - 1)) + mod(fibonnaci(x - 2)));
//		else return ff[x];
//	}
//}
//
//int main() {
//	int n; cin >> n;
//	cout << fibonnaci(n);
//}
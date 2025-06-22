//#include <iostream>
//#include <vector>
//using namespace std;
//vector<pair<int, int>> fv(41, make_pair(-1, -1)); // (( 0의 개수, 1의 개수))
//
//auto fibonacci(int n) {
//    if (fv[n].first != -1) return fv[n];
//
//    if (n == 0) return fv[0] = { 1, 0 };
//    if (n == 1) return fv[1] = { 0, 1 };
//    
//    pair<int, int> a = fibonacci(n - 1);
//    pair<int, int> b = fibonacci(n - 2);
//    return fv[n] = { a.first + b.first, a.second + b.second };
//}
//
//int main() {
//	int T; cin >> T;
//
//	for (int i = 0; i < T; i++) {
//        int n;
//        cin >> n;
//        cout << fibonacci(n).first << " " << fibonacci(n).second << "\n";
//	}
//}
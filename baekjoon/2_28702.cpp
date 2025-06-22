//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool isNumber(string str) {
//	for (char c : str) {
//		if (!isdigit(c)) return false;	
//	}
//	return true;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	vector<string> FizzBuzz(4);
//	int next;
//	
//	for (int i = 0; i < 3; i++) {
//		cin >> FizzBuzz[i];
//		if (isNumber(FizzBuzz[i])) {
//			next = stoi(FizzBuzz[i]) + 3 - i;
//		}
//	}
//
//	if (next % 3 == 0 && next % 5 == 0) cout << "FizzBuzz\n";
//	else if (next % 3 == 0 && next % 5 != 0) cout << "Fizz\n";
//	else if (next % 5 == 0 && next % 3 != 0) cout << "Buzz\n";
//	else cout << next << "\n";
//
//
//
//
//}
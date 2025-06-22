//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string input; cin >> input;
//	vector<int> nums;
//	string num;
//	bool minus = false;
//	for (int i = 0; i < input.size(); i++) {
//		if (input[i] == '+') {
//			if (minus == false) nums.emplace_back(stoi(num));
//			else nums.emplace_back(-stoi(num));
//			num.clear();
//		}
//		else if (input[i] == '-') {
//			if (minus == false) {
//				nums.emplace_back(stoi(num));
//				minus = true;
//			}
//			else nums.emplace_back(-stoi(num));
//			num.clear();
//		}
//		else {
//			num += input[i];
//		}
//		if (i == input.size() - 1) {
//			if(minus == false) nums.emplace_back(stoi(num));
//			else nums.emplace_back(-stoi(num));
//		}
//	}
//
//	int sum = 0;
//	for (auto i : nums) sum += i;
//	cout << sum;
//}
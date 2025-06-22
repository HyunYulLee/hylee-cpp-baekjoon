//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	long long x;
//	vector<long long> input;
//	vector<long long> input2;
//
//	for (int i = 0; i < N; i++) {
//		cin >> x; input.push_back(x); input2.push_back(x);
//	}
//
//	sort(input.begin(), input.end());
//
//	auto it = unique(input.begin(), input.end());
//	input.erase(it, input.end());
//	
//	map<int, int> result;
//	for (int i = 0; i < input.size(); i++) {
//		result.insert({ input[i], i });
//	}
//
//	for (int i = 0; i < N; i++) {
//		cout << result[input2[i]] << ' ';
//	}
//	
//
//}
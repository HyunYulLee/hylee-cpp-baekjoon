//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//int rounding(double num) {
//
//	if (num >= 0) {
//		int int_num = (int)num;
//		if (num >= int_num + 0.5) {
//			return int_num + 1;
//		}
//		else return int_num;
//	}
//	else if (num < 0) {
//		double positive_num = -1 * num;
//		int int_num = positive_num;
//		if (positive_num >= int_num + 0.5) {
//			return -1*(int_num +1);
//		}
//		else return -1*int_num;
//	}
//
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	multiset<int> nums;
//	set<int> mode_set;
//	vector<pair<int, int>> nums_N(4000);
//
//	for (int i = 0; i < N; i++) {
//		int input;
//		cin >> input;
//		nums.insert(input);
//	}
//
//	double avg;
//	int sum = 0;
//	for (int i : nums) {
//		sum += i;
//	}
//	avg = (double)sum / (double)N;
//	cout << rounding(avg) << "\n";
//	
//	int median;
//	auto i = nums.begin();
//	advance(i, N/2);
//	median = *i;
//	cout << median << "\n";
//
//	set<int> mode;
//	int index = 0;
//	int mode_count = 0;
//	int mode_N = 0;
//	for (int i : nums) {
//		if (mode_N <= nums.count(i)) {
//			mode_N = nums.count(i);
//			nums_N[index] = make_pair(i, nums.count(i));
//			index++;	
//		}
//	}
//	for (int i = 0; i <= index; i++) {
//		if (nums_N[i].second == mode_N) {
//			if (nums_N[i - 1].first != nums_N[i].first && i != 0) {
//				mode_count++;
//				mode.insert(nums_N[i].first);
//			}
//		}
//	}
//
//	if (mode_count == 1) {
//		auto i = mode.begin();
//		cout << *i << "\n";
//	}
//	else {
//		auto i = mode.begin();
//		advance(i, 1);
//		cout << *i << "\n";
//	}
//
//	int range;
//	int max_num;
//	int min_num;
//	int count = 1;
//
//	for (int i : nums) {
//		if (count == 1) {
//			min_num = i;
//		}
//		if (count == N) {
//			max_num = i;
//		}
//		count++;
//	}
//	range = max_num - min_num;
//	cout << range << "\n";
//	
//
//}
//	
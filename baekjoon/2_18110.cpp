//#include <iostream>
//#include <set>
//
//using namespace std;
//
///*
//* [반올림 함수]
//* 0.5 이상이면 +1, 0.5 미만이면 -1
//*/
//int rounding(double num) {
//	int int_num = (int)num;
//	if (num >= int_num + 0.5) {
//		return int_num + 1;
//	}
//	else return int_num;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, cut, sum = 0;
//	int set_count = 1;
//	cin >> N;
//
//	if (N == 0) {
//		cout << "0";
//		return 0;
//	}
//
//	multiset<int> input_set;
//
//	cut = rounding(N * 0.15);
//
//	for (int i = 0; i < N; i++) {
//		int input;
//		cin >> input;
//		input_set.insert(input);
//	}
//
//	for (int i : input_set) {
//		if (set_count <= cut || set_count > N - cut) {
//			set_count++;
//		}
//		else {
//			sum += i;
//			set_count++;
//		}
//	}
//
//	int number_of_people = N - cut * 2;
//	double avg = (double)sum / (double)number_of_people;
//
//	cout << rounding(avg);
//
//}
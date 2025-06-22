//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//struct coordinate {
//	int x;
//	int y;
//
//	bool operator<(const coordinate XandY) const {
//		if (y == XandY.y) return x < XandY.x;
//		return y < XandY.y;
//	}
//
//};
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//	set<coordinate> coord_set;
//
//	for (int i = 0; i < N; i++) {
//		coordinate coord_input;
//		cin >> coord_input.x >> coord_input.y;
//		coord_set.insert(coord_input);
//	}
//	
//	for (auto& i : coord_set) {
//		cout << i.x << " " << i.y << "\n";
//	}
//
//
//}

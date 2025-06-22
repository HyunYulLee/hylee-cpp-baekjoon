//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct WandH {
//	int weight;
//	int height;
//
//	WandH(int w = 0, int h = 0) : weight(w), height(h) {}
//};
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//
//	int N;
//	cin >> N;
//	vector<WandH> WH_vec(N);
//	vector<int> WH_grade(N, 0);
//
//	for (int i = 0; i < N; i++) {
//		int weight_input;
//		int height_input;
//
//		cin >> weight_input >> height_input;
//		WH_vec[i] = WandH(weight_input, height_input);
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			if (WH_vec[i].height < WH_vec[j].height && WH_vec[i].weight < WH_vec[j].weight) {
//				WH_grade[i]++;
//			}
//			if (WH_vec[i].height > WH_vec[j].height && WH_vec[i].weight > WH_vec[j].weight) {
//				WH_grade[j]++;
//			}
//		}
//	}
//	
//	for (int i = 0; i < N; i++) {
//		cout << WH_grade[i] + 1 << "\n";
//	}
//
//
//}

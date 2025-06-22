//
//
//#include <iostream>
//#include <vector>
//
//
//int main() {
//
//	std::ios_base::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	
//	int N, M;
//	int k;
//
//
//	std::cin >> N >> M;
//	std::vector<int> arr(N);
//	for (int i = 0; i < N; i++) { // 배열
//		std::cin >> arr[i];
//	}
//
//	std::vector<int> sum(N); // 누적 합 배열
//	sum[0] = arr[0];
//	for (int i = 1; i < arr.size(); i++) {
//		sum[i] = sum[i - 1] + arr[i];
//	}
//
//	for (int i = 0; i < M; i++) {
//		int start, end;
//
//		std::cin >> start >> end;
//		if (start - 1 == 0) {
//			std::cout << sum[end - 1] << "\n";
//		}
//		else {
//			std::cout << sum[end - 1] - sum[start - 2] << "\n";
//		}
//	}
//}

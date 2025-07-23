//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	int N, M;
//	string S;
//	cin >> N >> M >> S;
//	int i = 0, cnt = 0, result = 0;
//	while (i < M - 2) {
//		if (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I') {
//			cnt++;
//			i += 2;
//
//			if (cnt == N) { // 찾음
//				result++;
//				cnt--; // 중복해서 IOI가 있을 수 있으므로 맨 앞 IOI 배열을 무시
//			}
//		}
//		else { // IOI 못찾음
//			i++;
//			cnt = 0;
//		}
//	}
//
//	cout << result;
//}
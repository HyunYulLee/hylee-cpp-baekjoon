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
//			if (cnt == N) { // ã��
//				result++;
//				cnt--; // �ߺ��ؼ� IOI�� ���� �� �����Ƿ� �� �� IOI �迭�� ����
//			}
//		}
//		else { // IOI ��ã��
//			i++;
//			cnt = 0;
//		}
//	}
//
//	cout << result;
//}
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct State {
//	int position, time;
//};
//
//int main() {
//	int N, K; cin >> N >> K;
//
//	queue<State> updatePosition;
//	State initial;
//	initial.position = N;
//	initial.time = 0;
//	updatePosition.push(initial);
//
//	vector<int> position(100001, -1); // �湮���� ���� ��ġ�� -1�� �ʱ�ȭ
//
//	while (!updatePosition.empty()) {
//		auto front = updatePosition.front();
//		int p = front.position, t = front.time;
//		updatePosition.pop();
//
//		if (p > 100000 || p < 0) continue;
//
//		if (position[p] == -1) { // �湮���� �ʾ��� ��
//			position[p] = t;
//		}
//		else { // �̹� �湮�� ��
//			if (position[p] > front.time) { // �� ª�� �ð��� ������
//				position[p] = front.time;
//			}
//			else continue;
//		}
//
//		auto next1 = front, next2 = front, next3 = front;
//		next1.position--; next1.time++;
//		next2.position++; next2.time++;
//		next3.position *= 2; next3.time++;
//		updatePosition.push(next1); updatePosition.push(next2); updatePosition.push(next3);
//
//	}
//
//	cout << position[K];
//
//
//}
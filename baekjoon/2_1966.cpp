//#include <iostream>
//#include <queue>
//#include <set>
//
//using namespace std;
//
//struct doc
//{
//	int weight;
//	int target;
//};
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//	
//
//	while (T--) {
//		int count = 0;
//		queue<doc> printer;
//		doc document;
//		multiset<int, greater<int>> weight_set; 
//		int N, M;
//		cin >> N >> M;
//		for (int i = 0; i < N; i++) {
//			if (i == M) {
//				cin >> document.weight;
//				document.target = 0; // target ����
//				printer.push(document);
//				weight_set.insert(document.weight);
//			}
//			else {
//				cin >> document.weight;
//				document.target = -1;
//				printer.push(document);
//				weight_set.insert(document.weight);
//			}
//		}	
//
//		while (1) { // target�� ��µ� ������ �ݺ�
//
//			auto set_first = weight_set.begin();
//			if (printer.front().weight != *set_first) { // queue�� �� �տ� �ִ� �׸��� �ִ��� �ƴ� ��
//				doc printer_top = printer.front();
//				printer.pop();
//				printer.push(printer_top);
//			}
//			else { // queue�� �� �տ� �ִ� �׸��� �ִ��� ��
//				if (printer.front().target == 0) { // �ִ��̸�, Ÿ���� ��
//					count++;
//					cout << count << "\n";
//					break;
//				}
//				else { // Ÿ���� �ƴ� ��
//					count++;
//					printer.pop();
//					weight_set.erase(weight_set.begin());
//				}
//			}
//		}
//		
//
//	}
//
//
//
//
//}

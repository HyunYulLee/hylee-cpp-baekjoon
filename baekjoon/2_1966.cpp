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
//				document.target = 0; // target 설정
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
//		while (1) { // target이 출력될 때까지 반복
//
//			auto set_first = weight_set.begin();
//			if (printer.front().weight != *set_first) { // queue의 맨 앞에 있는 항목이 최댓값이 아닐 때
//				doc printer_top = printer.front();
//				printer.pop();
//				printer.push(printer_top);
//			}
//			else { // queue의 맨 앞에 있는 항목이 최댓값일 때
//				if (printer.front().target == 0) { // 최댓값이며, 타겟일 때
//					count++;
//					cout << count << "\n";
//					break;
//				}
//				else { // 타겟이 아닐 때
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

//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//
//
//	while (1) {
//
//		string input;
//		getline(cin, input);
//		stack<char> str_stack;
//
//		if (input == ".") {
//			return 0;
//		}
//
//		for (char i : input) {
//			
//			if (i == '(') {
//				str_stack.push(i);
//			}
//			else if (i == ')') {
//				if (!str_stack.empty()) {
//					if (str_stack.top() != '(') {
//						break;
//					}
//					else {
//						str_stack.pop();
//					}
//				}
//				else {
//					str_stack.push(i);
//					break;
//				}
//			}
//			else if (i == '[') {
//				str_stack.push(i);
//			}
//			else if (i == ']') {
//				if (!str_stack.empty()) {
//					if (str_stack.top() != '[') {
//						break;
//					}
//					else {
//						str_stack.pop();
//					}
//				}
//				else {
//					str_stack.push(i);
//					break;
//				}
//			}
//
//		}
//
//		if (str_stack.empty()) {
//			cout << "yes" << "\n";
//		}
//		else cout << "no" << "\n";
//	}
//}
//
//

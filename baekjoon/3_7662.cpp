#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		multiset<long long> v;
		int k; cin >> k;
		while (k--) {
			string input1;
			long long input2; 
			cin >> input1 >> input2;
	
			if (input1 == "I") {
				v.insert(input2);
			}
			else if (input1 == "D") {
				if (v.empty()) continue;
				if (input2 == 1) {
					v.erase(prev(v.end()));
				}
				else {
					v.erase(v.begin());
				}
			}
		}
		if (v.empty()) {
			cout << "EMPTY \n";
		}
		else {
			cout << *prev(v.end()) << " " << *v.begin() << "\n";
		}
	}
}
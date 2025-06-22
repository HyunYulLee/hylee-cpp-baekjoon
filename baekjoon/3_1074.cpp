//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int N; cin >> N;
//    int r, c; cin >> r >> c;
//    int size = 1;
//    while (N--) {
//        size *= 2;
//    }
//    int result = 0;
//    int x = 0, y = 0;
//    while (1) { // size = 4 r = 3 c = 1
//        int block = (size / 2) * (size / 2);
//        if (size == 1) break;
//        if (r < x + size / 2 && c < y + size / 2) result;
//        else if (r < x + size / 2 && c >= y + size / 2) {
//            result += block;
//            y += size / 2;
//        }
//        else if (r >= x + size / 2 && c < y + size / 2) {
//            result += 2 * block;
//            x += size / 2;
//        }
//        else {
//            result += 3 * block;
//            x += size / 2;
//            y += size / 2;
//        }
//        size /= 2;
//    }
//    cout << result;
//}
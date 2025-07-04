//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//void rotate(vector<vector<string>> &p, int k) {
//	auto one = p[0][0], two = p[0][1], three = p[0][2], four = p[1][0], six = p[1][2], seven = p[2][0], eight = p[2][1], nine = p[2][2];
//	if (k == 0) { // 시계 방향
//		p[0][0] = seven; p[0][1] = four; p[0][2] = one;
//		p[1][0] = eight;				 p[1][2] = two;
//		p[2][0] = nine; p[2][1] = six; p[2][2] = three;
//	}
//	else { // 반시계 방향
//		p[0][0] = three; p[0][1] = six; p[0][2] = nine;
//		p[1][0] = two;				 p[1][2] = eight;
//		p[2][0] = one; p[2][1] = four; p[2][2] = seven;
//	}
//}
//
//auto U(vector<vector<vector<string>>> cube, int k) {
//	auto c = cube;
//	auto& up = c[0];
//	auto FU = c[2][0], BU = c[3][0], LU = c[4][0], RU = c[5][0];
//	if (k == 0) { // 시계 방향
//		rotate(up, 0);
//		c[2][0] = RU;
//		c[3][0] = LU;
//		c[4][0] = FU;
//		c[5][0] = BU;
//	}
//	else { // 반시계 방향
//		rotate(up, 1);
//		c[2][0] = LU; 
//		c[3][0] = RU; 
//		c[4][0] = BU;
//		c[5][0] = FU;
//	}
//	return c;
//}
//auto D(vector<vector<vector<string>>> cube, int k) {
//	auto c = cube;
//	auto &down = c[1];
//	auto FD = c[2][2], BD = c[3][2], LD = c[4][2], RD = c[5][2];
//	if (k == 0) { // 시계 방향
//		rotate(down, 0);
//		c[2][2] = LD;
//		c[3][2] = RD;
//		c[4][2] = BD;
//		c[5][2] = FD;
//	}
//	else { // 반시계 방향
//		rotate(down, 1);
//		c[2][2] = RD;
//		c[3][2] = LD;
//		c[4][2] = FD;
//		c[5][2] = BD;
//	}
//	return c;
//}
//auto F(vector<vector<vector<string>>> cube, int k) {
//	auto c = cube;
//	auto &front = c[2];
//	auto UF = c[0][2], DF = c[1][0];
//	string LF[] = {c[4][0][2], c[4][1][2], c[4][2][2]}, RF[] = {c[5][0][0], c[5][1][0], c[5][2][0]};
//	if (k == 0) { // 시계 방향
//		rotate(front, 0);
//		for (int i = 0; i < 3; i++) {
//			c[0][2][i] = LF[2 - i];
//			c[1][0][i] = RF[2 - i];
//			c[4][i][2] = DF[i];
//			c[5][i][0] = UF[i];
//		}
//	}
//	else { // 반시계 방향
//		rotate(front, 1);
//		for (int i = 0; i < 3; i++) {
//			c[0][2][i] = RF[i];
//			c[1][0][i] = LF[i];
//			c[4][i][2] = UF[2 - i];
//			c[5][i][0] = DF[2 - i];
//		}
//	}
//	return c;
//}
//auto B(vector<vector<vector<string>>> cube, int k) {
//	auto c = cube;
//	auto &back = c[3];
//	auto UB = c[0][0], DB = c[1][2];
//	string LB[] = {c[4][0][0], c[4][1][0], c[4][2][0]}, RB[] = {c[5][0][2], c[5][1][2], c[5][2][2]};
//	if (k == 0) { // 시계 방향
//		rotate(back, 0);
//		for (int i = 0; i < 3; i++) {
//			c[0][0][i] = RB[i];
//			c[1][2][i] = LB[i];
//			c[4][i][0] = UB[2 - i];
//			c[5][i][2] = DB[2 - i];
//		}
//	}
//	else { // 반시계 방향
//		rotate(back, 1);
//		for (int i = 0; i < 3; i++) {
//			c[0][0][i] = LB[2 - i];
//			c[1][2][i] = RB[2 - i];
//			c[4][i][0] = DB[i];
//			c[5][i][2] = UB[i];
//		}
//	}
//	return c;
//}
//auto L(vector<vector<vector<string>>> cube, int k) {
//	auto c = cube;
//	auto &left = c[4];
//	string UL[] = {c[0][0][0], c[0][1][0], c[0][2][0]}, DL[] = {c[1][0][0], c[1][1][0], c[1][2][0]};
//	string FL[] = {c[2][0][0], c[2][1][0], c[2][2][0]}, BL[] = {c[3][0][2], c[3][1][2], c[3][2][2]};
//	if (k == 0) { // 시계 방향
//		rotate(left, 0);
//		for (int i = 0; i < 3; i++) {
//			c[0][i][0] = BL[2 - i];
//			c[3][i][2] = DL[2 - i];
//			c[1][i][0] = FL[i];
//			c[2][i][0] = UL[i];
//		}
//	}
//	else { // 반시계 방향
//		rotate(left, 1);
//		for (int i = 0; i < 3; i++) {
//			c[0][i][0] = FL[i];
//			c[3][i][2] = UL[2 - i];
//			c[1][i][0] = BL[2 - i];
//			c[2][i][0] = DL[i];
//		}
//	}
//	return c;
//}
//auto R(vector<vector<vector<string>>> cube, int k) {
//	auto c = cube;
//	auto &right = c[5];
//	string UR[] = { c[0][0][2], c[0][1][2], c[0][2][2] }, DR[] = { c[1][0][2], c[1][1][2], c[1][2][2] };
//	string FR[] = { c[2][0][2], c[2][1][2], c[2][2][2] }, BR[] = { c[3][0][0], c[3][1][0], c[3][2][0] };
//	if (k == 0) { // 시계 방향
//		rotate(right, 0);
//		for (int i = 0; i < 3; i++) {
//			c[0][i][2] = FR[i];
//			c[3][i][0] = UR[2 - i];
//			c[1][i][2] = BR[2 - i];
//			c[2][i][2] = DR[i];
//		}
//	}
//	else { // 반시계 방향
//		rotate(right, 1);
//		for (int i = 0; i < 3; i++) {
//			c[0][i][2] = BR[2 - i];
//			c[3][i][0] = DR[2 - i];
//			c[1][i][2] = FR[i];
//			c[2][i][2] = UR[i];
//		}
//	}
//	return c;
//}
//
//int main() {
//	int T; cin >> T;
//	while (T--) {
//		int n; cin >> n;
//		vector<vector<vector<string>>> cube(6, vector<vector<string>>(3, vector<string>(3)));
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				cube[0][j][k] = "w";
//			}
//		}
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				cube[1][j][k] = "y";
//			}
//		}
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				cube[2][j][k] = "r";
//			}
//		}
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				cube[3][j][k] = "o";
//			}
//		}
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				cube[4][j][k] = "g";
//			}
//		}
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				cube[5][j][k] = "b";
//			}
//		}
//		while (n--) {
//			string input; cin >> input;
//			if (input[0] == 'U') {
//				if (input[1] == '+') cube = U(cube, 0);
//				else cube = U(cube, 1);
//			}
//			else if (input[0] == 'D') {
//				if (input[1] == '+') cube = D(cube, 0);
//				else cube = D(cube, 1);
//			}
//			else if (input[0] == 'F') {
//				if (input[1] == '+') cube = F(cube, 0);
//				else cube = F(cube, 1);
//			}
//			else if (input[0] == 'B') {
//				if (input[1] == '+') cube = B(cube, 0);
//				else cube = B(cube, 1);
//			}
//			else if (input[0] == 'L') {
//				if (input[1] == '+') cube = L(cube, 0);
//				else cube = L(cube, 1);
//			}
//			else if (input[0] == 'R') {
//				if (input[1] == '+') cube = R(cube, 0);
//				else cube = R(cube, 1);
//			}
//		}
//		auto up = cube[0];
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				cout << up[i][j];
//			}
//			cout << '\n';
//		}
//	}
//}
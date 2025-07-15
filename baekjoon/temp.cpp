/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <math.h>

using namespace std;

int calculate(int digit) { // digit 자리 경우의 수 반환
	if (digit == 0) return 0;
	int k = 2 * pow(3, digit - 1);
	k %= 1000000007;
	return k;
}


long long Answer;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int T, test_case; cin >> T; cin.ignore();
	for (test_case = 0; test_case < T; test_case++)
	{
		int digit = 0;
		int curr; // 현재 자리 수로 만들 수 있는 경우의 수
		int prev = 0; // 이전 자리 수로 만들 수 있는 경우의 수
		int count;
		while (true) {

			char c_input = cin.get();
			if (c_input == '\n') break; // 탈출
			digit++;
			int input = c_input - '0';

			if (digit == 1) {
				if (input > 2) curr = 2; // 1, 2
				else if (input == 2) curr = 1; // 1
				else curr = 0;
			}
			else {
				if (curr == 0) curr = 1;

				if (input > 2) curr *= 3;
				else if (input == 1) curr *= 2;
				else curr *= 1;



			}
			prev += calculate(digit - 1);
			prev %= 1000000007;
			count = curr + prev;
			count %= 1000000007;

		}

		Answer = count;


		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
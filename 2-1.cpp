#include <iostream>
#include <string>
using namespace std;

int main() {
	char op, me, buff;
	string s;
	int pts, sum = 0;
	do {
		getline(cin, s);
		pts = 0;

		if (s.length() > 0) {
			op = s[0];
			me = s[2];
			switch (op) {
			case 'A':
				if (me == 'X') pts = 1 + 3;
				if (me == 'Y') pts = 2 + 6;
				if (me == 'Z') pts = 3 + 0;
				break;
			case 'B':
				if (me == 'X') pts = 1 + 0;
				if (me == 'Y') pts = 2 + 3;
				if (me == 'Z') pts = 3 + 6;
				break;
			case 'C':
				if (me == 'X') pts = 1 + 6;
				if (me == 'Y') pts = 2 + 0;
				if (me == 'Z') pts = 3 + 3;
				break;
			default:
				break;
			}
			sum += pts;
		}
	} while (s.length() > 1);
	cout << "\n" << sum;
	return 0;
}
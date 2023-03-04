#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int n = 100;
	int map[n][n] = {};
	int i;

	int x, y = 0;
	do {
		getline(cin, s);
		if (s.length() < 3) break;
		if (y == 1) x = s.length();
		for (i = 0; i < s.length(); i++) {
			map[y][i] = (int)s[i] - 48;
		}
		y++;
	} while (1);

	cout << x << " " << y;

	int Y, X;
	int visible = 0;
	for (Y = 1; Y < y - 1; Y++) {
		for (X = 1; X < x - 1; X++) {
			if ((map[Y][X - 1] < map[Y][X] || map[Y][X + 1] < map[Y][X]) || (map[Y - 1][X] < map[Y][X] || map[Y + 1][X] < map[Y][X])) {
				visible++;
				cout << "y = " << Y << "\t" << X << "\t";
			}
		}
	}
	visible += (2 * x) + (2 * y) - 4;
	cout << visible;
	return 0;
}
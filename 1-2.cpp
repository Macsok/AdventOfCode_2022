#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int sum, answer[3] = {};

	do {
		do {

			getline(cin, s, '\n');

			if (s.length() > 1) sum += stoi(s);
			else {
				if (sum > answer[0]) {
					answer[0] = sum;
					sort(answer, answer + 3);
				}
				sum = 0;
			}

		} while (sum);

		getline(cin, s, '\n');
		if (s.length() > 1) sum += stoi(s);

	} while (s.length() > 1);

	cout << answer[0] + answer[1] + answer[2];
	return 0;
}
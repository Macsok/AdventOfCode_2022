#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int sum, answer = 0;
	
	do {
		do {
	
			getline(cin, s, '\n');

			if (s.length() > 1) sum += stoi(s);
			else {
				if (sum > answer) answer = sum;
				sum = 0;
			}

		} while (sum);

		getline(cin, s, '\n');
		if (s.length() > 1) sum += stoi(s);

	} while (s.length() > 1);

	cout << answer;
	return 0;
}
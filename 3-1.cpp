#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int i, k, sum = 0;
	char common;
	do {
		getline(cin, s);
		common = '\0';
		//	find common
		for (i = 0; i < (s.length() / 2); i++) {
			for (k = (s.length() / 2); k < s.length(); k++) {
				if (s[i] == s[k]) {
					common = s[i];
					break;
				}
			}
			if (common) break;
		}
		if (common < 91) common -= 38;
		else common -= 96;
		sum += common;

	} while (s.length() > 2);

	//	-38 (enter)
	cout << sum + 38;
	return 0;
}
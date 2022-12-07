#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, s;
	int n = 0, i;
	do {
		getline(cin, str);
		if (str.length() < 4) break;
		s += str;
	} while (str.length() > 4);
	cout << s;

	n = 4;
	for (i = 3; i < s.length(); i++) {
		if(s[i] != s[i - 1] && s[i] != s[i - 2]) if(s[i] != s[i - 3] && s[i - 1] != s[i - 2])
			if (s[i - 2] != s[i - 3] && s[i - 1] != s[i - 3]) { cout << n; break; }
		n++;
	}

	return 0;
}
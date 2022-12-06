#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2, s3;
	int i, k, l, sum = 0;
	char common;
	do {
		getline(cin, s1);
		if(s1.length() < 2) break;
		getline(cin, s2);
		getline(cin, s3);
		
		common = '\0';
		//	find common
		for (i = 0; i < s1.length(); i++) {
			for (k = 0; k < s2.length(); k++) {
				for (l = 0; l < s3.length(); l++) {
					if (s1[i] == s2[k] && s1[i] == s3[l]) {
						common = s1[i];
						break;
					}
				}
				if (common) break;
			}
			if (common) break;
		}

		if (common < 91) common -= 38;
		else common -= 96;
		sum += common;

	} while (s1.length() > 2);

	//	1 to quit
	cout << sum;
	return 0;
}
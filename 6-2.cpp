#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string str, s;
	int n = 0, i, k, z;
	do {
		getline(cin, str);
		if (str.length() < 4) break;
		s += str;
	} while (str.length() > 4);
	//cout << s;

	n = 14;
	int diff;

	str.clear();
	for (i = 0; i < 13; i++) str.push_back(s[i]);
	//cout  << endl << str << endl;
	for (i = 13; i < s.length(); i++) {
		diff = 0;
		str.push_back(s[i]);

		//cout << str << endl;

		for (k = 0; k < 14; k++) {
			for (z = k + 1; z < 14; z++) {


				if (str[k] == str[z]) break;
				else {
					diff++;
				}


			}
		}
		
		//cout << diff << "\t";
		if (diff == 91) {
			cout << n;
			break;
		}
		str.erase(0, 1);
		n++;
	}



	return 0;
}
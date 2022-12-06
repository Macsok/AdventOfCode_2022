#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, stack[9], buff;
	int i = 0;
	do {
		getline(cin, s);
		if (s[1] == '1') break;

		for (int k = 0; k < 9; k++) if (s[k * 4 + 1] != ' ') {
			buff = s[k * 4 + 1];
			stack[k].insert(0, buff);
		}

	} while (s[1] != '1');
	
	getline(cin, s);


	int ile, skad, gdzie;
	do {
		getline(cin, s);
		if (s[0] == '1') break;
		ile = s[5] - 48;
		skad = s[12] - 48;
		gdzie = s[17] - 48;
		cout << ile;

	} while (1);
	



	//for (i = 0; i < 9; i++) cout << stack[i] << endl;

	return 0;
}
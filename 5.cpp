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

	char copy[40], ch;
	int ile, skad, gdzie;
	do {
		getline(cin, s, ' ');
		//cout << s;
		if (s[1] == 'q') break;

		cin >> ile;
		//cout << ile;
		getline(cin, s, ' ');
		getline(cin, s, ' ');
		cin >> skad;
		getline(cin, s, ' ');
		getline(cin, s, ' ');
		cin >> gdzie;

		//cout << " " << ile << " " << skad << " " << gdzie << " ";

		for (i = 0; i < 9; i++) cout << i + 1 << " " << stack[i] << endl;

		skad--;
		gdzie--;

		buff.clear();
		for (i = 0; i < ile; i++) {
			ch = stack[skad][stack[skad].length() - 1];
			buff.push_back(ch);
			//stack[gdzie].push_back(ch);
			stack[skad].pop_back();
		}
		
		for (i = 0; i < ile; i++) {
			ch = buff[buff.length() - 1];
			stack[gdzie].push_back(ch);
			buff.pop_back();
		}


		//stack[gdzie].replace(stack[skad], stack[gdzie].length(), ile, stack[skad].length() - ile, ile);

		/*
		stack[skad].copy(copy, 50, stack[skad].length() - ile);
		//buff = copy;
		//cout << copy << "\t";
		stack[gdzie] += copy;

		//cout << stack[gdzie] << "\t";
		stack[gdzie].pop_back();
		stack[gdzie].pop_back();
		stack[gdzie].pop_back();
		//cout << stack[gdzie] << "\t";

		stack[skad].copy(copy, stack[skad].length() - ile, 0);
		//buff = copy;

		stack[skad] = copy;
		stack[skad].pop_back();
		stack[skad].pop_back();
		*/

	} while (1);
	

	for (i = 0; i < 9; i++) cout << i + 1 << " " << stack[i] << endl;

	for (i = 0; i < 9; i++) cout << stack[i][stack[i].length() - 1];

	return 0;
}
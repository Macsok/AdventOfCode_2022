#include <iostream>
#include <string>
using namespace std;
int main() {
	string one, two, three, four;
	int a, b, c, d;
	int sum = 0;
	do {
		getline(cin, one, '-');
		if (one == "q") break;
		getline(cin, two, ',');
		getline(cin, three, '-');
		getline(cin, four, '\n');
		a = stoi(one);
		b = stoi(two);
		c = stoi(three);
		d = stoi(four);

		//	2-3,1-4
		if (a >= c && b <= d) sum++;
		//	1-4,2-3
		else if (a <= c && b >= d) sum++;

	} while (1);
	cout << sum;
	return 0;
}
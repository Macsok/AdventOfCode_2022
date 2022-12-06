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

		//	1-3,2-4
		if (c <= b && c >= a) sum++;
		//	2-4,1-3
		else if (d <= b && d >= a) sum++;
		else if (a >= c && a <= d) sum++;
		else if (b >= c && b <= d) sum++;

	} while (1);
	cout << sum;
	return 0;
}
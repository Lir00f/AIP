#include <iostream>
using namespace std;

void main() {
	char ch = '0';
	cout << "Enter the sequence of symbols;" << endl;
	do {
		cin >> ch;
		if (ch == '.')
			break;
		cout << int(ch) << endl;
	} while (ch != '.');
}

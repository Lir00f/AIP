#include <iostream>
using namespace std;

void main() {
	int h, m, s;
	cout << "Enter hours: ";
	cin >> h;
	cout << "Enter minutes: ";
	cin >> m;
	cout << "Enter seconds: ";
	cin >> s;
	cout << "Seconds: " << 60 * (60 * h) + (60*m)+s;
}

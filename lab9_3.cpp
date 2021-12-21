#include <iostream>
using namespace std;

void main() {
int proizv = 1, min = 2147483647;
int sum = 0, num = 1;
while (num != 0) {
	cin >> num;
	if (num > 10 && num < 25)
		sum += num;
	if (num > 15)
		proizv *= num;
	if (num < min && num != 0)
		min = num;
}
cout << "Summa :" << sum << endl << "Proizvedenie  =  " << proizv << endl << "min = " << min << endl << endl;
}

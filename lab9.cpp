#include <iostream>
using namespace std;

void main() {
	// Лабораторная работа 9

	cout << "Task 1" << endl;
	char ch = '0';
	cout << "Enter char" << endl;
	do {
		cin >> ch;
		if (ch == '.')
			break;
		cout << int(ch) << endl;
	} while (ch != '.');
	cout << "Finish!" << endl << endl;

	cout << "Task 2" << endl;
	int sum = 0, num;
	cout << "Enter the sequence of numbers" << endl;
	while (sum <= 100)
	{
		cin >> num;
		sum += num * num;
	}
	cout << "Sum = " << sum << endl << endl; 

	cout << "Task 3" << endl;
	int mult = 1, min = 2147483647;
	sum = 0, num = 1;
	while (num != 0) {
		cin >> num;
		if (num > 10 && num < 25)
			sum += num;
		if (num > 15)
			mult *= num;
		if (num < min && num != 0)
			min = num;
	}
	cout << "Sum = " << sum << endl << "Mult = " << mult << endl << "Min = " << min << endl << endl;

	cout << "Task 4.1" << endl;
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 5; j >= i; j--) {
			cout << i << ' ';
		}
		cout << endl;
	}
	cout << endl << "Task 4.2" << endl;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 6 - i; j++) {
			cout << j << ' ';
		}
		cout << endl;
	}

	cout << endl << "Task 5" << endl;
	int type, seconds = 0, minutes = 0, hours = 0;
	cout << "Enter 1 for minutes and 2 for hours" << endl;
	cin >> type;
	switch (type) {
	case 1:
		cout << "Enter minutes: ";
		cin >> minutes;
		hours = minutes / 60;
		seconds = minutes * 60;
		break;
	case 2:
		cout << "Enter hours: ";
		cin >> hours;
		minutes = hours * 60;
		seconds = minutes * 60;
		break;
	}
	cout << "Seconds: " << seconds << ". Minutes: " << minutes << ". Hours: " << hours << endl << endl;
	system("pause");
}

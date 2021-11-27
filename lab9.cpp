#include <iostream>
using namespace std;

void main() {
	setlocale (LC_ALL, "RUSSIAN");
	cout << "Первое Задание" << endl;
	char ch = '0';
	cout << "Введите символ" << endl;
	do {
		cin >> ch;
		if (ch == '.')
			break;
		cout << int(ch) << endl;
	} while (ch != '.');

	cout << "Задание 2" << endl;
	int sum = 0, num;
	cout << "Введите последовательность чисел" << endl;
	while (sum <= 100)
	{
		cin >> num;
		sum += num * num;
	}
	cout << sum << endl; 

	cout << "Task 3" << endl;
	int bebr = 1, min = 2147483647;
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
	cout << "Сумма равна :" << sum << endl << "bebr =  " << bebr << endl << "min = " << min << endl << endl;

	cout << "Задание 4, часть первая" << endl;
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 5; j >= i; j--) {
			cout << i << ' ';
		}
		cout << endl;
	}
	cout << endl << "Задание 4, часть вторая" << endl;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 6 - i; j++) {
			cout << j << ' ';
		}
		cout << endl;
	}

	cout << endl << "Задание 5" << endl;
	int type, seconds = 0, minutes = 0, hours = 0;
	cout << "Введите либо min для подсчета минут, либо hour для подсчета часов: " << endl;
	cin >> type;
	switch (type) {
	case min:
		cout << "Enter minutes: ";
		cin >> minutes;
		hours = minutes / 60;
		seconds = minutes * 60;
		break;
	case hour:
		cout << "Enter hours: ";
		cin >> hours;
		minutes = hours * 60;
		seconds = minutes * 60;
		break;
	}
	cout << "Секунд: " << seconds <<endl<< " Минут:  " <<endl<< minutes << "Часов: " << hours << endl << endl;
	system("pause");
}

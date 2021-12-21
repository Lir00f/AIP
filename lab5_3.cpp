#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введи первую строку из трех символов : " << endl;
	string l1, l2;
	cin >> l1;
	cout << "Введи вторую строку из трех символов : " << endl;
	cin >> l2;
	cout << "Результат сложения этих двух строк: " << l1 + l2 << endl;
}

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian"); /* т.к я думал что нужен будет в консоли русский язык, в ином случае строка лишняя */
	float a = 0;
	float b = 0;
	cin >> a;
	cin >> b;
	cout << a << "+" << b << "=" << floor((a+b) * 100) / 100 << endl;
	cout << a << "-" << b << "=" << floor((a-b) * 100) / 100;
}

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, p;
	float s;
	cout << "Введите первую сторону :";
	cin >> a;
	cout << "Введите вторую сторону :";
	cin >> b;
	cout << "Введите третью сторону :";
	cin >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь данного треугольника равна : " << s;

}

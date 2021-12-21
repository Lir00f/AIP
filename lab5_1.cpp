#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	float num1, num2;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	cout << "Ответ в примере 1.1: " << (((-1 * num1) + sqrt((num1 * num1) + (3 * num2))) / (2 * num2)) << endl;
	cout << "Ответ в примере 1.2: " << (sqrt((3 + (num1 * num2)) / (4 * (num1 * num1)))) << endl;
	cout << "Ответ в примере 1.3: " << ((6-abs(num1-3*num2))/(sqrt(5-(num2*num2)))) << endl;
	cout << "Ответ в примере 1.4: " << (exp(num1+7)*(sqrt(37*num2-pow(num1,3)))) << endl;
	cout << "Ответ в примере 1.5: " << ((sin(num1))+((num2*num2)/(cos(2*num1)+23))) << endl;
	cout << "Ответ в примере 1.6: " << (tan(num2)-(abs(num1-(3*num2)+((2)/(sqrt(num2+4)))))) << endl;
}

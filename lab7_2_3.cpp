#include <iostream>
using namespace std;
void main()
//(0,0) (0,1) (-1,0)
{
	setlocale(LC_ALL, "RUSSIAN");
	float x, y;
	float a, b, c;
	cout << "enter point coordinates : \n";
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if ((x >= -1 && x <= 0) && (y <= 1 && y >= 0))
		cout << "Точка принадлежит области" << endl;
	else if ((x >= 0 && x <= 1) && (y <= 0 && y >= -1))
		cout<< "Точка принадлежит области" << endl;
	else
		cout << "Эта точка не принадлежит нашей области." << endl;
	cin.get();

	system("pause");

	int num1, num2;
	char sign;
	cout << "Enter number1: ";
	cin >> num1;
	cout << "Enter sign: ";
	cin >> sign;
	cout << "Enter number2: ";
	cin >> num2;
	switch (sign)
	{
	case '+':
	{
		cout << "Result: " << num1 + num2 << endl;
		break;
	}
	case '-':
	{
		cout << "Result: " << num1 - num2 << endl;
		break;
	}
	case '*':
	{
		cout << "Result: " << num1 * num2 << endl;
		break;
	}
	case '/':
	{
		if (num2 != 0)
			cout << "Result: " << num1 / num2 << endl;
		else
			cout << "Error.Division by zero" << endl;
		break;
	}
	default:
	{
		cout << "Error.Wrong sign" << endl;
		break;
	}
	}
}

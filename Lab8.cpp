#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	// Часть 1
	cout << "Первая часть лабораторной работы #8" << endl<<endl;


	int i, j, s = 0;
	for (i = 2; ; i += 2)
	{
		cout << "Введите значение переменной j : ";
		cin >> j;
		if (j != 0)
			s = s + i * j;
		else
			break;
	}
	cout << "Значение s = " << s << endl;

	
	//Часть 2
	system("pause");


	cout << "Вторая часть Лабораторной работы #8" << endl<< endl;
	int n, u;
	double t, a, f = 0;
	cout << "Введите значение n: ";
	cin >> n;
	cout << "Введите  значение t: ";
	cin >> t;
	for (u = 0; u <= n; u++)
	{
		cout << "Введите значение a: ";
		cin >> a;
		f = f + a * pow(t, n - u);
	}
	cout << "Значение f = " << f<<endl<<"Нажмите любую кнопку дважды для выхода из программы";
	cin.get();
	cin.get();
}

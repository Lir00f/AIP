#include <iostream>
using namespace std;
void main()
{
setlocale(0, "");
double num;
cout << "Введите произвольное число: ";
cin >> num;
if (num < 10)
{
cout << "Это число меньше 10." << endl;
}
else
{
cout << "Это число больше либо равно 10." << endl;
}
}

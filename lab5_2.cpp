#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите слово" << endl;
	string s;
	cin >> s;
	swap(s[0], s[s.length() - 1]);
	swap(s[2], s[s.length()-1]);
	swap(s[0], s[2]);
	cout << s << endl;
}

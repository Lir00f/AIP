#include<iostream>
using namespace std;
void main()
{
	int code;
	char ch;
	cout << "type characters and press Enter: ";
	cin >> ch;
	code = (int)ch;
	cout << "The ASCII-code is: " << code << endl;
	cout << "The previous symbol is : " << char(code - 1) << endl;
	cout << "The next symbol is : " << char(code + 1);
	
	cin.get();
	cin.get();
}

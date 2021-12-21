#include<iostream>
using namespace std;
void main()
{
	int s=0, val;
	cout << "enter the sequence of numbers\n";
	while (s <= 100)
	{
		cin >> val;
		s = s + val * val;
	}
	cout << "s=" << s;
	cin.get();

	cin.get();
}

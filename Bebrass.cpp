#include <iostream>
using namespace std;
struct weather {
​int temp;
​double wspeed;
​char wind, prec;
 
};
int main()
{
​setlocale(LC_ALL, "RUS");
​int avgtemp, wind, precR, daynumber, w, s, n, e, R, SS;
​double awgspeed;
​string flag;
​daynumber = 1;
​SS = 0;
​R = 0;
​w = 0;
​s = 0;
​n = 0;
​e = 0;
​avgtemp = 0;
​awgspeed = 0;
​while (flag != "quit")
​{
​​weather day;
 
​​cout << "День " << daynumber << endl;
​​cout << "Введите погоду на сегодня " << endl;
​​cout << "Введите температуру: " << endl;
​​cin >> day.temp;
​​cout << "Введите скорость ветра: " << endl;
​​cin >> day.wspeed;
​​cout << "Введите направление ветра: " << endl;
​​cin >> day.wind;
​​cout << "Введите тип осадков: " << endl;
​​cin >> day.prec;
​​avgtemp = avgtemp + day.temp;
​​awgspeed = awgspeed + day.wspeed;
​​if (day.wind == 'w')
​​​w = w + 1;
​​else if (day.wind == 'n')
​​​w = w + 1;
​​else if (day.wind == 'e')
​​​w = w + 1;
​​else if (day.wind == 's')
​​​w = w + 1;
​​else if (day.prec == 'R')
​​​R = R + 1;
​​else if (day.prec == 'Ss')
​​​SS = SS + 1;
​​daynumber = daynumber + 1;
​​cout << "Введите что-то: ";
​​cin >> flag;
​}
​avgtemp = avgtemp / daynumber;
​awgspeed = awgspeed / daynumber;
​cout << "avg windspeed=" << awgspeed << endl;
​cout << "avg temp=" << avgtemp << endl;
​cout << "north=" << n << endl;
​cout << "south=" << s << endl;
​cout << "east=" << e << endl;
​cout << "west=" << w << endl;
​cout << "Rain=" << R << endl;
​cout << "Snow=" << SS << endl;
 
}

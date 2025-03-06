#include <iostream>
#include <windows.h>
using namespace std;

// 1.Площа та довжина кола
int main()
{
    double r;
    cout << "Please, enter the radius of the circle: ";
	cin >> r;
	const double pi = 3.14159;
	cout << "The area of the circle is: " << pi * r * r << "\n";
	cout << "The length of the circumference: " << 2 * pi * r << "\n";
	
}

// 2.A = B , B = A.
int main()
{
	int c = 0;
	int a, b;
	cout << "Please, enter a number: ";
	cin >> a;
	cout << "Please, enter b number: ";
	cin >> b;
	cout << "a = " << b + c << "\n";
	cout << "b = " << a + c << "\n";
	cout << " a = " << b << "\n";
	cout << " b = " << a << "\n";
}

// 3.UAH
int main()
{
	SetConsoleOutputCP(1251);
	double uah;
	cout << "Введіть суму в гривнях:";
	cin >> uah;
	int x = uah;
	double y = uah - x;
	cout << "Гривні: " << x << "\n";
	cout << "Копійки: " << y << "\n";

}

// 4. Seconds
int main()
{
	int sec;
	cout << "Please, enter the number of seconds: ";
	cin >> sec;
	long int day = sec / 86400;
	long int h = (sec - day * 86400) / 3600;
	long int m = (sec - day * 86400 - h * 3600) / 60;
	long int s = sec - day * 86400 - h * 3600 - m * 60;
	cout << day << "Days" "\n" << h << "Hours" "\n" << m << "Minets" "\n" << s << "Seconds" << "\n";
}

// 5.Вартість розмови
int main()
{
	int h, m, s;
	int h1, m1, s1;
	cout << "Please, enter the time to start talking through a space: ";
	cin  >> h >> m >> s ;
	cout << "Please, enter the time to end talking through a space: ";
	cin >> h1 >> m1 >> s1;
	int time = (h1 - h) * 3600 + (m1 - m) * 60 + (s1 - s);
	double time_in_min = (double)time / 60;
	double cost = time_in_min * 0.15;
	cout << "The call cost: " << cost << "UAH" "\n";

}

// 6.Планети: mk - меркурій , vn - венера , er - земля , mr - марс , jp -  юпітер , st - сатурн , ur - уран , nt -  нептун .
int main()
{
	double mk = 0.055;
	double vn = 0.815;
	double er = 1.00;
	double mr = 0.107;
	double jp = 317.83;
	double st = 95.16;
	double ur = 14.54;
	double nt = 17.15;
	double total_weight = mk + vn + er + mr + jp + st + ur + nt;
	cout << "The total mass of the planets: " << total_weight << "\n";
	cout << "The average mass of the planets: " << total_weight / 8 << "\n";
	cout << "Mercury mass in percentage: " << mk / total_weight * 100 << "%" "\n";
	cout << "Venus mass in percentage: " << vn / total_weight * 100 << "%" "\n";
	cout << "Earth mass in percentage: " << er / total_weight * 100 << "%" "\n";
	cout << "Mars mass in percentage: " << mr / total_weight * 100 << "%" "\n";
	cout << "Jupiter mass in percentage: " << jp / total_weight * 100 << "%" "\n";
	cout << "Saturn mass in percentage: " << st / total_weight * 100 << "%" "\n";
	cout << "Uranus mass in percentage: " << ur / total_weight * 100 << "%" "\n";
	cout << "Neptune mass in percentage: " << nt / total_weight * 100 << "%" "\n";
	cout << "Jupiter is " << jp / (total_weight - jp) << " times larger than other planets!" "\n";
	
}

// 7.Трьозначні числа
int main()
{
	int a, b;
	cout << "Please, enter a three-digit number: ";
	cin >> a;
	cout << "Please, enter b three-digit number: ";
	cin >> b;
	int a1 = a / 100;
	int a2 = (a / 10) % 10;
	int a3 = a % 10;
	int b1 = b / 100;
	int b2 = (b / 10) % 10;
	int b3 = b % 10;
	a = a1 * 100 + b2 * 10 + a3;
	b = b1 * 100 + a2 * 10 + b3;
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
}


// 8. Валера і яйця
int main()
{
	int chic = 20;
	int price = 100;
	int eggs_x = 1;
	int price_eggs = 40;
	int costs = chic * price;
	int vat = costs * 0.2;
	int total_costs = costs + vat;
	int total_eggs = total_costs / price_eggs;
	int eggs_in_day = chic * eggs_x;
	double days = (double)total_eggs / eggs_in_day;
	cout << "Valeria needs to sell eggs " << days << " days" "\n";

}
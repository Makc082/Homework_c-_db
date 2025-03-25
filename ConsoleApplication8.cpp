#include <iostream>
#include < Windows.h >
using namespace std;

// 1. Складання від 1 до 10
int main()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	cout << sum << endl;
}

// 2. Таблиця Цельсій-Фаренгейт
int main()
{
	for (int c = -20; c <= 40; c += 5)
	{
		cout << c << "C = " << c * 1.8 + 32 << "F\n";
	}
}

// 3. Відсотки випадкових чисел від -100 до 100
int main()
{
	srand(time(0));
	rand();
	SetConsoleOutputCP(1251);

	int min = -100;
	int max = 100;
	int K = max - min;
	double x = 0;
	double y = 0;
	double z = 0;
	double p = 0;
	double n = 0;

	for (int i = 0; i <= K; i++) {
		int num = (rand() % K) + min;

		if (num > 0) {
			x++;
		}
		else if (num < 0) {
			y++;
		}
		else if (num == 0) {
			z++;
		}

	    if (num % 2 == 0) {
			p++;
		}
		else if (num % 2 != 0) {
			n++;
		}
	}

	double x1 = (x * 100) / K;
	double y1 = (y * 100) / K;
	double z1 = (z * 100) / K;
	double p1 = (p * 100) / K;
	double n1 = (n * 100) / K;

	cout << "Позитивних чисел: " << x1 << "%\n";
	cout << "Негативних чисел: " << y1 << "%\n";
	cout << "Нулів: " << z1 << "%\n";
	cout << "Парних чисел: " << p1 << "%\n";
	cout << "Непарних чисел: " << n1 << "%\n";
}

// 4. Факторіал.
int main()
{
	SetConsoleOutputCP(1251);	

	int n;
	cout << "Введіть число: ";
	cin >> n;
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	cout << "Факторіал числа - " << n << " Число - " << fact << "\n";
}

// 5. Кількість цифр та сума цифр числа.
int main()
{
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть число: ";
	cin >> x;
	int count = 0;
	int sum = 0;

	if (x <= 0) {
		cout << "Введіть число більше 0\n";
		return 0;
	}

	while (x > 0)
	{
		count++;
		sum += x % 10;
		x /= 10;
	}
	cout << "Кількість цифр: " << count << "\n";
	cout << "Сума цифр: " << sum << "\n";
}

// 6. Числа на які ділиться число.
int main()
{
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть число: ";
	cin >> x;

	if (x <= 0) {
		cout << "Введіть число більше 0\n";
		return 0;
	}

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0) {
			cout << "Число" << x << " ділиться на: " << i << "\n";
		}
	}
	
	
}

// 7. Перевірка на просте число.
int main()
{
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть число: ";
	cin >> x;

	if (x <= 0) {
		cout << "Введіть число більше 0\n";
		return 0;
	}
	int count = 0;

	for (int i = 1; i <= x; i++) {
 
		if (x % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		cout << "Число " << x << " просте\n";
	}
	else {
		cout << "Число " << x << " не просте\n";
	}
}

// 8. Чи є одинакові цифри підряд в числі.
int main()
{
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть число: ";
	cin >> x;

	if (x <= 0) {
		cout << "Введіть число більше 0\n";
		return 0;
	}

	int y = 0;
	int count = 0;

	while (x > 0) {

		y = x % 10;
		x /= 10;

		if (y == x % 10) {
			count++;
			break;
		}
	}

	if (count == 0) {
		cout << "Одинакових цифр підряд немає\n";
	}
	else if (count > 0) {
		cout << "Одинакові цифри підряд є\n";
	}
}

// 9. Поліндром.
int main() 
{
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть число: ";
	cin >> x;

	int y = 0;
	int z = x;

	while (x > 0) {
		y = y * 10 + x % 10;
		x /= 10;
	}

	cout << "Число: " << y << "\n";

	if (z == y) {
		cout << "Число поліндром\n";
	}
	else {
		cout << "Число не поліндром\n";
	
	}
}

// 10. «Вгадай число».
int main()
{
	SetConsoleOutputCP(1251);

	cout << "Загадайте число від 0 до 1000! \n";

	int x = 1;
	int y = 2;
	int z = 3;
	int choice;
	int min = 0;
	int center = 500;
	int max = 1001;

	do {
		cout << "Чи число більше " << center << "?\n";
		cout << "1. Так\n";
		cout << "2. Ні\n";
		cout << "3. Рівне\n";
		cin >> choice;
		if (choice == x) {
			min = center;
			center = (center + max) / 2;
		}
		else if (choice == y) {
			max = center;
			center = (center + min) / 2;
		}
		else if (choice == z) {
			cout << "Число вгадане\n";
		}
	} while (choice != z);
}

// 11. Витрати студента.
int main() 
{
	SetConsoleOutputCP(1251);
	
	double profit = 3000.0;
	double costs = 4000.0;
	double x = 0;

	for (int i = 0; i < 10; i++) {
		costs = costs * 0.05 + costs;
		x += costs;
		x = x - profit;
	}

	cout << "Студенту потрібно взяти " << x << "грн\n";
}

// 12.Таблиця множення.
int main() 
{
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << " * " << j << " = " << i * j << "\n";
		}
		cout << "\n";
	}
}

// 13. Щасливі квитки.
int main()
{
	SetConsoleOutputCP(1251);

	int i = 100000;
	int x = 0;
	int y = 0;
	int count = 0;

	cout << "Номери щасливих квитків: \n";

	for (i; i <= 999999; i++) {
		x = i / 1000;
		y = i % 1000;

		int sum1 = 0;
		int sum2 = 0;

		while (x > 0) {
			sum1 += x % 10;
			x /= 10;
		}

		while (y > 0) {
			sum2 += y % 10;
			y /= 10;
		}
		
		if (sum1 == sum2) {
			count++;
		}
		cout << i << ", ";
	}

	cout << "Загальна кількість щасливих китків: " << count << "\n";
}

// 14. Восьмизначні числа.
int main()
{
	SetConsoleOutputCP(1251);
	int x = 0;
	int y = 0;
	int z = 0;
	int count = 0;

	cout << "Восьмизначні числа, цифри яких не повторюються і діляться на 12345: \n";

	for (x = 10000000; x < 99999999; x++) {
		
		if (x % 12345 != 0) {
			continue;
		}

		int num = x;
		bool uniq = true;

		while (num > 0 && uniq) {
			y = num % 10;
			int num1 = num / 10;

			while (num1 > 0) {
				z = num1 % 10;

				if (y == z) {
					uniq = false;
					break;
				}
				num1 /= 10;
			}
			num /= 10;
		}
		if (uniq) {
			cout << x << ", ";
			count++;
		}
	} 
	cout << "\nЗагальна кількість чисел: " << count << "\n";
}

// 15.Прості числа.
int main() 
{
	SetConsoleOutputCP(1251);

	cout << "Прості числа від 2 до 10000000: \n";

	for (int x = 2; x < 10000000; x++) {
		int count = 0;
		int z = x;

		for (int i = 1; i <= z; i++) {
			if (z % i == 0) {
				count++;
			}
		
		}

		if (count == 2) {
			cout << x << ", ";
		}
	}
}

// 16. Рівнобедрений трикутник.
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout << "Введіть висоту трикутника: ";
	cin >> n;
	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= n - x; y++) {
			cout << " ";
		}
		for (int y = 1; y <= 2 * x - 1; y++) {
			cout << "*";
		}
		cout << "\n";
	}
}

// 17. Kаркас паралелепіпеда.
int main() 
{
	SetConsoleOutputCP(1251);

	int a;
	cout << "Введіть довжину: ";
	cin >> a;
	int b;
	cout << "Введіть ширину: ";
	cin >> b;
	int c;
	cout << "Введіть висоту: ";
	cin >> c;
	cout << "\n";

	for (int x = 1; x <= a; x++) {

		for (int y = 1; y <= b; y++) {
			
			for (int z = 1; z <= c; z++) {
				if (x == 1 || x == a || y == 1 || y == b || z == 1 || z == c) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << "\n";
	}
	
}

// 18. Квадрат та діагоналі.
int main()
{
	SetConsoleOutputCP(1251);

	int n = 10;
	for (int x = 0; x <= n; x++) {
		for (int y = 0; y <= n; y++) {

			if (x == 0 && y <= n) {
				cout << " *";
			}
			else if (x == n && y <= n) {
				cout << " *";
			}
			else if (y == 0 && x <= n) {
				cout << " *";
			}
			else if (y == n && x <= n) {
				cout << " *";
			}
			else if (x == y) {
				cout << " *";
			}
			else if (x + y == n) {
				cout << " *";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}

// Діагональна стрілка.
int main()
{
	int n = 10;

	for (int x = 0; x <= n; x++) {
		for (int y = 0; y <= n; y++) {

			if (x == 0 && y < 3) {
				cout << " *";
			}
			else if (y == 0 && x < 3) {
				cout << " *";
			}
			else if (x == y) {
				cout << " *";
			}
			else if (x == n && y > n -3) {
				cout << " *";
			}
			else if (y == n && x > n - 3) {
				cout << ' *';
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
}
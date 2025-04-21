#include <iostream>
#include <windows.h>
using namespace std;

// 1. Від 1 до n.
void counter(int n) {

	if (n > 0) {
		counter(n - 1);
		cout << n << " ";
	}
}

int main()
{

	counter(5);
}

// 2. Від a до b
int counter(int a, int b) {
	if (a == b) {
		cout << a << " ";
	}
	else if (a < b ) {
		cout << a << " ";
		counter(a + 1, b);
		return a;
	}
	else if (a > b) {
		cout << a << " ";
		counter(a - 1, b);
		return a;
	}
}
	
int main() {
	
	counter(5, 1);
}

//3. Точна ступінь двійки.
int degree(int n) {

    if (n % 2 == 0 && n / 2 > 2) {
		degree(n / 2);
		cout << "YES\n";
		return n;
	}
	else if (n % 2 != 0) {
		cout << "NO\n";
		return n;
	}
}

int main() {
	
	int n;
	cout << "Enter num: ";
	cin >> n;
	degree(n);
}

// 4. Сума цифр числа.
int sum(int n) {

	if (n > 1) {
		return n % 10 + sum(n / 10);
	}
}

int main() {

	cout << sum(179) << "\n";
}

// 5 - 6. Цифри навпаки та у звичайному порядку.
int revers(int n) {
	if (n > 0) {
		int num = n % 10;
		cout << num << " ";
		revers(n / 10);
		cout << num << " ";
		return n;
	}
}
int main() {

	revers(179);
}

// 7. Реверс числа.
int revers_num(int n, int revers = 0) {
	if (n == 0) 
		return revers;
		return revers_num(n / 10, revers * 10 + n % 10);	
}

int main() {
	
	cout << revers_num(179) << "\n";
}

// 8. Слово поліндром.
int polindrom(string str, int i, int j) {
	if (i >= j) {
		cout << "YES\n";
		return 0;
	}
	else if (str[i] != str[j]) {
		cout << "NO\n";
		return 0;
	}
	else {
		polindrom(str, i + 1, j - 1);
	}
	return 0;

}

int main() {

	polindrom("radar", 0, 4);
}

// 9.Числа Фібоначчі.
int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	

		cout << fibonacci(12) << "\n";
}

// 10. Ступінь числа.
int degree(int a, int b) {
	if (b == 0) {
		return 1;
	}
	else if (b == 1) {
		return a;
	}
	else {
		return a * degree(a, b - 1);
	}
}

int main() {

	int a, b;
	cout << "Enter num: ";
	cin >> a;
	cout << "Enter degree: ";
	cin >> b;
	cout << degree(a, b) << "\n";
}
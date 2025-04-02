#include <iostream>
#include < Windows.h >
using namespace std;

// 1. Лінія з @.
void line(int y, string text, int color, bool horizont) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, color);

	if (horizont == true) {
		for (int i = 0; i < y; i++) {
			cout << text << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 0; i < y; i++) {
			cout << text << "\n";
		}
	}
	cout << "\n";
}

int main() {

	line(20, "@", 12, true);
	line(20, "@", 12, false);
	cout << "\n";
}

// 2. Rectangle.
void rectangle(int x, int y, char bordersimbol = '#', char fillsimbol = '*', int bordercolor = 14, int fillcolor = 12, int startX = 0, int startY = 0) {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;

	for (int i = 0; i < y; i++) {
		position.X = startX;
		position.Y = startY + i;
		SetConsoleCursorPosition(h, position);

		for (int j = 0; j < x; j++) {
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1) {
				SetConsoleTextAttribute(h, bordercolor);
				cout << bordersimbol;
			}
			else {
				SetConsoleTextAttribute(h, fillcolor);
				cout << fillsimbol;
			}
		}
	}
	cout << "\n";
}

int main() {

	rectangle(20, 10);
}

// 3. Куб переданного числа.
int cube(int x) {
	int answer = x * x * x;
	return answer;
}

int main() {
	int x;
	cout << "Enter your number: ";
	cin >> x;
	cout << "\nCube of your number is: " << cube(x) << "\n";

}

// 4. Число просте.
int Prime(int x) {

	if (x <= 0) {
		cout << "Enter a number greater than 0. \n";
		return 0;
	}
	int count = 0;

	for (int i = 1; i <= x; i++) {

		if (x % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		cout << "Number " << x << " prime\n";
	}
	else {
		cout << "Number " << x << " not prime\n";
	}
}

int main() {
	int num;
	cout << "Enter your number: ";
	cin >> num;

	Prime(num);
}

// 5. Сума чисел.
int sum(int x, int y) {

	int answer = 0;

	for (int i = x + 1; i < y; i++) {
		answer += i;
	}
	cout << "Sum of range numbers: " << answer << "\n";
	return answer;
}

int main() {
	int num1 = 0;
	cout << "Enter first number: ";
	cin >> num1;

	int num2 = 0;
	cout << "Enter second number: ";
	cin >> num2;

	sum(num1, num2);
}

// 6. Гральний кубик.
void cube(int x = 0, int y = 0, int value = 0, int bordercolor = 0, int valuecolor = 0, char borderchar = '#', char valuechar = '@', int startX = 0, int startY = 0) {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;

	for (int i = 0; i < y; i++) {
		position.X = startX;
		position.Y = startY + i;
		SetConsoleCursorPosition(h, position);

		for (int j = 0; j < x; j++) {
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1) {
				SetConsoleTextAttribute(h, bordercolor);
				cout << borderchar;
			}
			else {
				cout << " ";
			}
		}
	}

	SetConsoleTextAttribute(h, valuecolor);
	if (value == 1) {
		position.X = startX + x / 2;
		position.Y = startY + y / 2;
		SetConsoleCursorPosition(h, position);
		cout << valuechar << "\n\n";

	}
	else if (value == 2) {
		position.X = startX + x / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4 - 1;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
	}
	else if (value == 3) {
		position.X = startX + x / 2;
		position.Y = startY + y / 2;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4 - 1;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
	}
	else if (value == 4) {
		position.X = startX + x / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x / 4;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar << "\n\n\n\n";
	}
	else if (value == 5) {
		position.X = startX + x / 2;
		position.Y = startY + y / 2;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x / 4;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar << "\n\n\n\n";
	}
	else if (value == 6) {
		position.X = startX + x / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x / 4;
		position.Y = startY + y * 3 / 4 - 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4;
		position.Y = startY + y / 4 + 1;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x / 4;
		position.Y = startY + y / 2;
		SetConsoleCursorPosition(h, position);
		cout << valuechar;
		position.X = startX + x * 3 / 4;
		position.Y = startY + y / 2;
		SetConsoleCursorPosition(h, position);
		cout << valuechar << "\n\n\n\n";
	}

	cout << "\n\n";
}

int main() {

	srand(time(0));
	rand();

	int min = 1;
	int max = 6;
	int K = max - min + 1;

	int bordercolor = rand() % 15 + 1;
	int valuecolor = rand() % 15 + 1;
	int value = rand() % K + min;
	int startX = rand() % 20 + 1;
	int startY = rand() % 20 + 1;

	cube(21, 11, value, bordercolor, valuecolor, '#', '@', startX, startY);
	cout << "\n";
}
#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <iomanip>
using namespace std;

// 1. 
int main()
{
	const int SIZE = 10;
	int ar[SIZE] = { 10, 20, 25, 30, 40, 55, 32, 2, 7, 3 };

	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << ", ";
	}
	cout << "\n";
	for (int x = SIZE -1;x >= 0; x--) {
		cout << ar[x] << ", ";
	}
}

int main()
{
	const int SIZE = 5;
	int ar[SIZE] = { 8, 3, 5, 2, 9 };

	for (int elem : ar) {
		cout << elem << ", ";
	}
	reverse(ar, ar + SIZE);
	cout << "\n";
	for (int elem : ar) {
		cout << elem << ", ";
	}
}

// 2.та 3.
int main()
{
	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	int min = -20;
	int max = 20;
	int K = max - min + 1;
	const int SIZE = 20;
	int ar[SIZE] = {};

	cout << "Числа з парним індексом: ";

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % K + min;

		if (i % 2 == 0) {
			cout << ar[i] << ", ";
		}
	}
	cout << "\n";
	
	int count = 0;
	double sum = 0;
	double average = 0;

	for (int x = 0; x < SIZE; x++) {
		if (ar[x] > 0) {
			count++;
			sum += ar[x];
			average = sum / count;
		 }
	}
	cout << "Кількість додатних елементів: " << count << "\n"
		"Сума додатних елементів: " << sum << "\n"
		"Середне арифметичне: " << average << "\n";;
}

// 5.
int main()
{
	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	int min = 0;
	const int SIZE = 200;
	int ar[SIZE] = {};
	int K = SIZE - min + 1;
	int x = 0;
	int count = 0;

	cout << "Ведіть число від 1 до 200: ";
	cin >> x;
	if (x < 1 || x > 200) {
		cout << "Спробуйте заново!";
	}
	cout << "\n";
	cout << "Ваше число повторюється: ";

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % K + min;
		if(ar[i] == x) {
			count++;
		}
	}
	cout << count << "\n";
}

// 13. Лотерея.
int main()
{
	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	const int SIZE = 5;
	int ar[SIZE] = {};
	int K = 42;
	int count = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int a = 0;
	int b = 0;

	cout << "Введіть 5 цифр від 0 до 42: \n";
	cin >> x >> y >> z >> a >> b;
	cout << "\n";
	if (x < 0 || x > 42 || y < 0 || y > 42 || z < 0 || z > 42 || a < 0 || a > 42 || b < 0 || b > 42) {
		cout << "Спробуйте заново!";
	}

	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % K;
		if (ar[i] == x || ar[i] == y || ar[i] == z || ar[i] == a || ar[i] == b) {
			count++;

		}
		if (count == 3) {
			cout << "Ви виграли 1500 кредитів!";
		}
		else if (count == 4) {
			cout << "Ви виграли 2000 кредитів!";
		}
		else if (count == 5) {
			cout << "Ви виграли 2500 крудитів!";
		}
		cout << ar[i] << ", ";
	}
	if (count < 3) {
		cout << "Ви програли!\n";
	}
}


// Двовимірні масиви.
// 1.Сума, сер. ар. , мін та макс.
int main() 
{

	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	const int ROWS = 5;
	const int COLS = 10;
	int ar[ROWS][COLS]{};
	int min = 0;
	int max = 20;
	int K = max - min + 1;
	int count = 0;
	double sum = 0;
	double average = 0;
	int num_min = 21;
	int num_max = -1;

	for (int y = 0; y < ROWS; y++) {
		for (int x = 0; x < COLS; x++) {
			ar[y][x] = rand() % K + min;

			cout << ar[y][x] << " ";

			if (ar[y][x] > num_max) {
				num_max = ar[y][x];
			}
			
			if (ar[y][x] < num_min) {
				num_min = ar[y][x];
			}
		   
			if (ar[y][x] > 0) {
				count++;
				sum += ar[y][x];
				average = sum / count;
			}
		}
		cout << "\n";
	}
	cout << "Сума: " << sum << "\n"
	    "Середне: " << average << "\n"
		"Найменьше: " << num_min << "\n"
		"Найбільше: " << num_max << "\n";
} 

// 2.Діагоналі.
int main() {
	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	const int ROWS = 10;
	const int COLS = 10;
	int ar[ROWS][COLS]{};
	int min = 0;
	int max = 20;
	int K = max - min + 1;
	int sum1 = 0;
	int sum2 = 0;

	for (int y = 0; y < ROWS; y++) {
		for (int x = 0; x < COLS; x++) {
			ar[y][x] = rand() % K + min;

			cout << setw(4) << ar[y][x];

			if (ar[y] == ar[x]) {
				sum1 += ar[y][x];
			}
			if (y + x == ROWS - 1) {
				sum2 += ar[y][x];
			}
			
		}
		cout << "\n";
	}
	cout << "Сума головної діагоналі: " << sum1 << "\n";
	cout << "Сума побічної діагоналі: " << sum2 << "\n";
}

//3. Додатні, від'ємні та нульові.
int main() {
	 
	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	const int ROWS = 10;
	const int COLS = 8;
	int ar[ROWS][COLS]{};
	int min = -10;
	int max = 10;
	int K = max - min + 1;
	int count_p = 0;
	int count_n = 0;
	int count0 = 0;

	for(int y = 0; y < ROWS; y++) {
		for(int x = 0; x < COLS; x++) {
			ar[y][x] = rand() % K + min;
			cout << setw(4) << ar[y][x];
			
			if (ar[y][x] > 0) {
				count_p++;
			}
			else if (ar[y][x] < 0) {
				count_n++;
			}
			else {
				count0++;
			}
		}
		cout << "\n";
	}
	cout << "Додатних чисел: " << count_p << "\n"
		<< "Неготивних чисел* " << count_n << "\n"
		<< "Нулів: " << count0 << "\n";
}

// 4. Сума рядка та стовпця.
int main() {

	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	const int ROWS = 5;
	const int COLS = 3;
	int ar[ROWS][COLS]{};
	int min = 0;
	int max = 20;
	int K = max - min + 1;
	int sum_r = 0;
	int sum_r1 = 0;
	int sum_r2 = 0;
	int sum_r3 = 0;
	int sum_r4 = 0;
	int sum_c = 0;
	int sum_c1 = 0;
	int sum_c2 = 0;

	for (int y = 0; y < ROWS; y++) {
		for (int x = 0; x < COLS; x++) {
			ar[y][x] = rand() % K + min;
			cout << setw(4) << ar[y][x];

			if (y == 0 && x < ROWS) {
				sum_r += ar[y][x];
			}
			else if (y == 1 && x < ROWS) {
				sum_r1 += ar[y][x];
			}
			else if (y == 2 && x < ROWS) {
				sum_r2 += ar[y][x];
			}
			else if (y == 3 && x < ROWS) {
				sum_r3 += ar[y][x];
			}
			else if (y == 4 && x < ROWS) {
				sum_r4 += ar[y][x];
			}

			if (x == 0 && y < COLS) {
				sum_c += ar[y][x];
			}
			else if (x == 1 && y < COLS) {
				sum_c1 += ar[y][x];
			}
			else if (x == 2 && y < COLS) {
				sum_c2 += ar[y][x];
			}
		}
		cout << "\n";
	}
	cout << "Сума кожного рядка: \n" << "1 = " << sum_r << "\n"
		<< "2 = " << sum_r1 << "\n"
		<< "3 = " << sum_r2 << "\n"
		<< "4 = " << sum_r3 << "\n"
		<< "5 = " << sum_r4 << "\n";
	cout << "Сума кожного стовпця: \n" << "1 = " << sum_c << "\n"
		<< "2 = " << sum_c1 << "\n"
		<< "3 = " << sum_c2 << "\n";
}

// 5. Номери рядків та стовпців.
int main() {
	
	const int ROWS = 5;
	const int COLS = 8;
	int ar[ROWS][COLS]{};
	int z = 0;

	for (int y = 0; y < ROWS; y++) {
		for (int x = 0; x < COLS; x++) {
			// за індексом
			ar[y][x] = y  * 10 + x;
			printf("%02d ", ar[y][x]);
		}
		cout << "\n\n";
	}
	

	for (int y = 0; y < ROWS; y++) {
		for (int x = 0; x < COLS; x++) {

			// за порядковим номером
			ar[y][x] = (y + 1) * 10 + (x + 1);
			cout << setw(4) << ar[y][x];
		}
		cout << "\n";
	}
}

// 6.Кінотеатр.
int main() {

	SetConsoleOutputCP(1251);
	srand(time(0));
	rand();

	const int ROWS = 10;
	const int COLS = 16;
	int ar[ROWS][COLS]{};
	bool found = false;
	int ROW = -1;
	int COL = -1;

	for (int y = 0; y < ROWS ; y++) {
		for (int x = 0; x < COLS ; x++) {
			ar[y][x] = rand() % 2;
			cout << setw(4)  << ar[y][x];
			
		}
		cout << "\n";
	}

	int K = 0;
	cout << "Введіть кількість місць: \n";
	cin >> K;

	for (int y = 0; y < ROWS; y++) {
		int count = 0;
		for (int x = 0; x < COLS; x++) {
			if (ar[y][x] == 0) {
				count++;
				if (count == K) {
					found = true;
					ROW = y;
					COL = x - K + 1;
					break;
				}
			}
			else {
				count = 0;
			}
		}
		if (found) break;
	}
	if (found) {
	    cout << "Можна продати квитки.\n Ряд: " << ROW + 1 << "\n місця: ";
		for (int x = COL; x < COL + K; x++) {
		    cout << x + 1 << " ";
		}
		cout << "\n";
    }
    else {
		cout << "Неможливо знайти " << K << " сусідніх вільних місць в одному ряду.\n";
	}
}
﻿#include <iostream>
#include <windows.h> // COORD HANDLE SetConsoleTextAttribute SetConsoleCursorPosition
#include <conio.h> // _getch
using namespace std;

enum GameObject : short { HALL, WALL, COIN, ENEMY };
enum Color : short {
	BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
	PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
	CYAN, RED, PINK, YELLOW, WHITE
};
enum Key : short {
	LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80,
	ENTER = 13, SPACE = 32, ESCAPE = 27, BACKSPACE = 8
};

void draw_map(int map[][65], const int HEIGHT, const int WIDTH) {

	srand(time(0));
	rand();

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			map[y][x] = rand() % 4; // 0 1 2 3

			// рамка по краях
			if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
				map[y][x] = GameObject::WALL;

			// отвори для входу і виходу
			if (x == 0 && y == 2 ||
				x == 1 && y == 2 ||
				x == 2 && y == 2 ||

				x == WIDTH - 1 && y == HEIGHT - 3 ||
				x == WIDTH - 2 && y == HEIGHT - 3 ||
				x == WIDTH - 3 && y == HEIGHT - 3)
				map[y][x] = GameObject::HALL;

			if (map[y][x] == GameObject::ENEMY) {
				int r = rand() % 10; // 0 1 2 3 4 5 6 7 8 9
				if (r != 0) {
					map[y][x] = GameObject::HALL;
				}
			}
		}
	}
}

HANDLE output_handle(int map[][65], const int HEIGHT, const int WIDTH) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 100; // 1-100
	SetConsoleCursorInfo(h, &cursor);
	draw_map(map, HEIGHT, WIDTH);
	return h;
}

COORD show_hero(int map[][65], const int HEIGHT, const int WIDTH, HANDLE h) {
	COORD hero;
	hero.X = 0;
	hero.Y = 2;
	SetConsoleCursorPosition(h, hero);
	SetConsoleTextAttribute(h, Color::BLUE);
	cout << "O";
	return hero;
}

void view(int map[][65], const int HEIGHT, const int WIDTH, HANDLE h) {

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			switch (map[y][x]) {
			case GameObject::HALL: // 0
				// як показати коридор
				SetConsoleTextAttribute(h, Color::BLACK);
				cout << " ";
				break;
			case GameObject::WALL: // 1
				SetConsoleTextAttribute(h, Color::DARKGREEN);
				// cout << "#";
				cout << (char)178;
				break;
			case GameObject::COIN:
				SetConsoleTextAttribute(h, Color::YELLOW);
				cout << ".";
				break;
			case GameObject::ENEMY:
				SetConsoleTextAttribute(h, Color::RED);
				cout << "O";
				break;
				// case GameObject::SMTH_ELSE:
					// як показати щось інше
				//	break;
			}

		}
		cout << "\n";
	}

}


void move_hero(int map[][65], const int HEIGHT, const int WIDTH, HANDLE h, COORD& hero, int& coins_collected) {

	int code = _getch(); // get character
	if (code == 224) {
		code = _getch();
	}
	COORD old_position = hero;
	bool has_been_moved = false; // false - пересування не було
	// cout << code << "\n";
	switch (code) {
	case Key::LEFT:
		if (hero.X > 0 && map[hero.Y][hero.X - 1] != GameObject::WALL) {
			has_been_moved = true;
			hero.X--;
		}
		break;
	case Key::RIGHT:
		if (map[hero.Y][hero.X + 1] != GameObject::WALL) {
			has_been_moved = true;
			hero.X++;
		}
		break;
	case Key::UP:
		if (map[hero.Y - 1][hero.X] != GameObject::WALL) {
			has_been_moved = true;
			hero.Y--;
		}
		break;
	case Key::DOWN:
		if (map[hero.Y + 1][hero.X] != GameObject::WALL) {
			has_been_moved = true;
			hero.Y++;
		}
		break;
	}
	if (has_been_moved) {
		SetConsoleCursorPosition(h, old_position);
		SetConsoleTextAttribute(h, Color::BLACK);
		cout << " ";

		SetConsoleCursorPosition(h, hero);
		SetConsoleTextAttribute(h, Color::BLUE);
		cout << "O";

	}
	if (map[hero.Y][hero.X] == GameObject::COIN) {

		map[hero.Y][hero.X] = GameObject::HALL;

		coins_collected++;
	}
	if (map[hero.Y][hero.X] == GameObject::ENEMY) {
		cout << "Game over";
		SetConsoleTextAttribute(h, Color::RED);
	}

}


int main() {

	const int HEIGHT = 25;
	const int WIDTH = 65;
	int map[HEIGHT][WIDTH] = {};

	system("title Bomberman");
	HANDLE h = output_handle(map, HEIGHT, WIDTH);

	// VIEW (подання - як буде виглядати ігрова локація)	
	view(map, HEIGHT, WIDTH, h);

	// показ ГГ.
	COORD hero = show_hero(map, HEIGHT, WIDTH, h);

	// показ монет.
	int coins_collected = 0;

	COORD coins_info;
	coins_info.X = WIDTH + 1;
	coins_info.Y = 0;
	SetConsoleCursorPosition(h, coins_info);
	SetConsoleTextAttribute(h, Color::DARKYELLOW);
	cout << "COINS: ";
	SetConsoleTextAttribute(h, Color::YELLOW);
	cout << coins_collected;


	//// ігровий двигунчик
	while (true) {
		move_hero(map, HEIGHT, WIDTH, h, hero, coins_collected);
	}
}

#include <iostream>
using namespace std;

void first() {
	int k,last_digit;
	bool check = false;

	//input and check 
	while (!check) {
		cout << "Введите Ваш возраст >> ";
		cin >> k;
		if (k < 1) { cout << "Возраст не может быть 0 или меньше\n"; }
		else if (k > 130) { cout << "Возраст не может быть больше 130\n"; }
		else { check = true; }
	}

	//output
	last_digit = k % 10;
	if (last_digit == 1) { cout << "Мне " << k << " год"; }
	else if (last_digit < 5) { cout << "Мне " << k << " года"; }
	else { cout << "Мне " << k << " лет"; }

}

void second() {
	int points;

	//input
	cout << "Введите коичество углов >> ";
	cin >> points;

	//output
	switch (points)
	{
	case(3): cout << "Это треугольник"; break;
	case(4): cout << "Это квадрат"; break;
	case(5): cout << "Это пятиугольник"; break;
	case(6): cout << "Это шестиугольник"; break;
	case(7): cout << "Это семиугольник"; break;
	case(8): cout << "Это восьмиугольник"; break;
	default: cout << "Это неизвестная фигура"; break;
	}
}

void third() {
	bool correct = false;
	int a, b;
	int count = 0;
	int num;

	//input 
	while (!correct) {
		cout << "Введите два числа через пробел >> ";
		cin >> a >> b;
		if (a < b) { correct = true; }
		else { cout << "Ошибка, первое число должно быть меньше второго\n"; }
	}

	//input,check and output
	for (int i = 0; i < 15; i++) {
		cout << "Введите число (" << i+1 << "/15) >> ";
		cin >> num;
		if (num >= a && num <= b) { count++; }
	}
	cout << "В диапазоне от " << a << " до " << b << " находятся " << count << " введённых чисел";
}


int main() {
	setlocale(LC_ALL, "Russian");

	int task;
	bool running = true;

	while (running) {
		cout << "\nВведите номер задания >> ";
		cin >> task;
		switch (task)
		{
		case (1):first(); break;
		case (2):second(); break;
		case (3):third(); break;
		case (101): running = false; break;
		default: cout << "Unknown task"; break;
		}
	}

	return 0;
}
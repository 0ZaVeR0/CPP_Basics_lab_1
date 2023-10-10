#include <iostream>
using namespace std;

void first() {
	int k,last_digit;
	bool check = false;

	//input and check 
	while (!check) {
		cout << "������� ��� ������� >> ";
		cin >> k;
		if (k < 1) { cout << "������� �� ����� ���� 0 ��� ������\n"; }
		else if (k > 130) { cout << "������� �� ����� ���� ������ 130\n"; }
		else { check = true; }
	}

	//output
	last_digit = k % 10;
	if (last_digit == 1) { cout << "��� " << k << " ���"; }
	else if (last_digit < 5) { cout << "��� " << k << " ����"; }
	else { cout << "��� " << k << " ���"; }

}

void second() {
	int points;

	//input
	cout << "������� ��������� ����� >> ";
	cin >> points;

	//output
	switch (points)
	{
	case(3): cout << "��� �����������"; break;
	case(4): cout << "��� �������"; break;
	case(5): cout << "��� ������������"; break;
	case(6): cout << "��� �������������"; break;
	case(7): cout << "��� ������������"; break;
	case(8): cout << "��� ��������������"; break;
	default: cout << "��� ����������� ������"; break;
	}
}

void third() {
	bool correct = false;
	int a, b;
	int count = 0;
	int num;

	//input 
	while (!correct) {
		cout << "������� ��� ����� ����� ������ >> ";
		cin >> a >> b;
		if (a < b) { correct = true; }
		else { cout << "������, ������ ����� ������ ���� ������ �������\n"; }
	}

	//input,check and output
	for (int i = 0; i < 15; i++) {
		cout << "������� ����� (" << i+1 << "/15) >> ";
		cin >> num;
		if (num >= a && num <= b) { count++; }
	}
	cout << "� ��������� �� " << a << " �� " << b << " ��������� " << count << " �������� �����";
}


int main() {
	setlocale(LC_ALL, "Russian");

	int task;
	bool running = true;

	while (running) {
		cout << "\n������� ����� ������� >> ";
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
#include <iostream>
using namespace std;

void first() {
	int k,last_digit;
	bool check = false;

	//input and check 
	while (!check) {
		cout << "Ââåäèòå Âàø âîçðàñò >> ";
		cin >> k;
		if (k < 1) { cout << "Âîçðàñò íå ìîæåò áûòü 0 èëè ìåíüøå\n"; }
		else if (k > 130) { cout << "Âîçðàñò íå ìîæåò áûòü áîëüøå 130\n"; }
		else { check = true; }
	}

	//output
	last_digit = k % 10;
	if (last_digit == 1) { cout << "Ìíå " << k << " ãîä"; }
	else if (last_digit < 5) { cout << "Ìíå " << k << " ãîäà"; }
	else { cout << "Ìíå " << k << " ëåò"; }

}

void second() {
	int points;

	//input
	cout << "Ââåäèòå êîè÷åñòâî óãëîâ >> ";
	cin >> points;

	//output
	switch (points)
	{
	case(3): cout << "Ýòî òðåóãîëüíèê"; break;
	case(4): cout << "Ýòî êâàäðàò"; break;
	case(5): cout << "Ýòî ïÿòèóãîëüíèê"; break;
	case(6): cout << "Ýòî øåñòèóãîëüíèê"; break;
	case(7): cout << "Ýòî ñåìèóãîëüíèê"; break;
	case(8): cout << "Ýòî âîñüìèóãîëüíèê"; break;
	default: cout << "Ýòî íåèçâåñòíàÿ ôèãóðà"; break;
	}
}

void third() {
	bool correct = false;
	int a, b;
	int count = 0;
	int num;

	//input 
	while (!correct) {
		cout << "Ââåäèòå äâà ÷èñëà ÷åðåç ïðîáåë >> ";
		cin >> a >> b;
		if (a < b) { correct = true; }
		else { cout << "Îøèáêà, ïåðâîå ÷èñëî äîëæíî áûòü ìåíüøå âòîðîãî\n"; }
	}

	//input,check and output
	for (int i = 0; i < 15; i++) {
		cout << "Ââåäèòå ÷èñëî (" << i+1 << "/15) >> ";
		cin >> num;
		if (num >= a && num <= b) { count++; }
	}
	cout << "Â äèàïàçîíå îò " << a << " äî " << b << " íàõîäÿòñÿ " << count << " ââåä¸ííûõ ÷èñåë";
}


int main() {
	setlocale(LC_ALL, "Russian");

	int task;
	bool running = true;

	while (running) {
		cout << "\nÂâåäèòå íîìåð çàäàíèÿ >> ";
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

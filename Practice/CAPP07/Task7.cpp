﻿#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	double a, b, c, a1, b1, c1, a2, b2, c2, p, S;
	do {
		cout << "Выберите способ ввода параметров 1 (через длины сторон) или 2 (через координаты)" << endl;
		cin >> x;
	} while (x != 1 && x != 2);
	if (x == 1) {
		cout << "Введите длины сторон" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a + b <= c || b + c <= a || a + c <= b) {
			cout << "Сумма двух сторон не может быть меньше или равна третей" << endl;
		}
		else {
			p = (a + b + c) / 2.0;
			S = sqrt(p*(p - a)*(p - b)*(p - c));
			cout << "S = " << S << endl;
		}
	}
	else {
		cout << "Введите координаты вершин" << endl;
		cin >> a1 >> a2;
		cin >> b1 >> b2;
		cin >> c1>> c2;
		if ((a1 == b1 && a2 == b2) || (b1 == c1 && b2 == c2) || (a1 == c1 && a2 == c2) || (a1 == b1 && a1 == c1) || (a2 == b2 && b2 == c2)) {
			cout << "Это не треугольник";
		}
		else {
			a = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));
			b = sqrt(pow(b2 - b1, 2) + pow(c2 - c1, 2));
			c = sqrt(pow(c2 - c1, 2) + pow(a2 - a1, 2));
			if (a + b <= c || b + c <= a || a + c <= b) {
				cout << "Сумма двух сторон не может быть меньше или равна третей" << endl;
			}
			else {
				p = (a + b + c) / 2.0;
				S = sqrt(p*(p - a)*(p - b)*(p - c));
				cout << "S = " << S << endl;
			}
		}
	}
}

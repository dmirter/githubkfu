#include <windows.h>
#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Вас приветствует программа Калькулятор,которая может выполнять одно из следующих действий:\n(+)Сложение\n(-)Вычитание\n(*)Умножение\n(/)Деление\n";
	cout << "Что бы программа правильно работал ввод данных должен производиться в сравнении с образцом";
	cout << "(Число)_(Знак операции)_(Число),где нижнее подчёркивание-пробел,а(Знак операции)-один из знаков арифметики";
	double A, B; char C;
	cin >> A >> C >> B;
	switch (C) {
	case'+':cout << A + B << endl; break;
	case'-':cout << A - B << endl; break;
	case'*':cout << A * B << endl; break;
	case'/':if (B != 0) cout << A / B << endl;
			else cout << "На ноль делить нельзя\n"; break;
	default:cout << "Ошибка!Вводимые данные введины в не соответствии с образцом,убедитесь в правильности вводимых данным\n";
	}
	system("pause");
	return 0;
}
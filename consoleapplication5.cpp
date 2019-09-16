#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, v, t;
	double a = -9.8;
	cout << "Введите X0:";
	cin >> x;
	cout << "Введите V0:";
	cin >> v;
	cout << "Введите t:";
	cin >> t;
	cout << "Первый способ(a*t*t/2): X(t)=" << x + v + a * t * t / 2;
	//cout << "\n" << "Второй способ(1/2*a*t*t): X(t)=" << x + v + 1 / 2 * a * t * t << "\n";//
	system("pause");
	return 0;
}

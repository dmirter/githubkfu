#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, v, t;
	double a = -9.8;
	cout << "������� X0:";
	cin >> x;
	cout << "������� V0:";
	cin >> v;
	cout << "������� t:";
	cin >> t;
	cout << "������ ������(a*t*t/2): X(t)=" << x + v + a * t * t / 2;
	//cout << "\n" << "������ ������(1/2*a*t*t): X(t)=" << x + v + 1 / 2 * a * t * t << "\n";//
	system("pause");
	return 0;
}
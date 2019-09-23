#include <iostream>
#include "cmath"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, x1, x2, D;
	cout << "Vvedite а:";
	cin >> a;
	cout << "Vvedite b:";
	cin >> b;
	cout << "Vvedite с:";
	cin >> c;
	if (a != 0)
	{
		double D = (b * b) - (4 * a * c);
		cout << "D = " << D << endl;
		if (D < 0)
		{
			cout << "Kornei net";
		}
		else
			if (D == 0)
			{
				double x = -b / (2 * a);
				cout << "Koren' x =" << x;
			}
			else
			{
				double x1 = (-b - sqrt(D)) / (2 * a);
				double x2 = (-b + sqrt(D)) / (2 * a);
				cout << "Korni uravneniya x1 =" << x1 << ", x2 =" << x2;
			}
	}
	else
	{
		cout << "a ne dolzno = 0" << endl;
	}
	if (b != 0)
	{
		x1 = -c / b;
		cout << "x1 =" << x1 << endl;
	}
	system("pause");
	return 0;
}
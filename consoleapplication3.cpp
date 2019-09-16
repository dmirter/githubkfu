#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	double c, d;
	cin >> a >> b;
	cout << "\n" << a + b << "\n" << a - b << "\n" << a * b << "\n" << a / b << "\n";
	cin >> c >> d;
	cout << "\n" << c + d << "\n" << c - d << "\n" << c * d << "\n" << c / d << "\n";
	cin >> a >> c;
	cout << "\n" << a + c << "\n" << a - c << "|n" << a * c << "\n" << a / c << "\n";
	cin >> d >> b;
	cout << "\n" << d + b << "\n" << d - b << "\n" << d * b << "\n" << d / b << "\n";

	system("pause");
	return 0;
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "\n" << a << "\n" << b;
	int d, e;
	cin >> d >> e;
	swap(d, e);
	cout << "\n" << d << "\n" << e;
	system("pause");
	return 0;

}

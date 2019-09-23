#include "iostream"
#include <math.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Russian");
 
 {
 double a, b, c, P, S;
 cout << "Введите a";
 cin >> a;
 cout << "Введите b";
 cin >> b;
 cout << "Введите c";
 cin >> c;
 P = (a + b + c) / 2;
 cout << "sqrt(P * (P - a)*(P - b)*(P - c)): S=" << sqrt(P * (P - a) * (P - b) * (P - c));
 }
	system("pause");
		return 0;
}




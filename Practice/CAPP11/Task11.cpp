#include <iostream>
using namespace std;
int main()
{
	int number, result = 1;
	cin >> number;
	for (int i = 2; i <= number; i++) 
	{
		result *= i;// умножение результата на i 
	}
	cout << result << endl;
}

/*
4. Решить систему уравнений (дробные коэффициенты a и b вводятся с клавиатуры)
	b-5*a, если a>b
X = (5-b)/a, если a=b
	(a-5)/b, если a<b
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	double a{ 0.0 }, b{ 0.0 };
	cout << "Введите a: " << endl;
	cin >> a;

	cout << "Введите b: " << endl;
	cin >> b;

	if (a > b)
		cout << "x = " << b - 5 * a << endl;
	else if (a == b)
		cout << "x = " << (5 - b) / a << endl;
	else if (a < b)
		cout << "x = " << (a - 5) / b << endl;

	return 0;
}
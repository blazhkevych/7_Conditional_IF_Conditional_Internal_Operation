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



	return 0;
}
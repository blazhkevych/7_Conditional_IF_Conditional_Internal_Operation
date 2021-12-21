/*
5. Проверить, имеет ли введенное дробное число
вещественную часть, т.е. равна ли дробная часть нулю.
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Введите дробное число: " << endl;
	double n{ 0.0 };
	cin >> n;
	(n - int(n) == 0) ? cout << "Не имеет." << endl : cout << "Имеет." << endl;

	return 0;
}
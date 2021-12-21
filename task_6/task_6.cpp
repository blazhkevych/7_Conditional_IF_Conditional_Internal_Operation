/*
6. Ввести координаты точки (x, y) и определить номер
четверти, в которую попала эта точка. Также необходимо
предусмотреть случай попадания точки на оси или в
начало координат.
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Введите координаты точки по оси Х: " << endl;
	int point_x{ 0 };
	cin >> point_x;

	cout << "Введите координаты точки по оси Y: " << endl;
	int point_y{ 0 };
	cin >> point_y;

	if (point_x > 0 && point_y > 0)
		cout << "Эта точка попала в 1 четверть." << endl;
	else if (point_x < 0 && point_y > 0)
		cout << "Эта точка попала в 2 четверть." << endl;
	else if (point_x < 0 && point_y < 0)
		cout << "Эта точка попала в 3 четверть." << endl;
	else if (point_x > 0 && point_y < 0)
		cout << "Эта точка попала в 4 четверть." << endl;
	else if (point_x == 0 || point_y == 0)
		cout << "Эта точка попала на ось координат." << endl;

	return 0;
}
/*
2. Пользователь задаёт координаты вершин прямоугольника
(координаты левого верхнего угла и координаты правого
нижнего угла), а также координаты точки (X, Y).
Принадлежит ли точка этому прямоугольнику?
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	int upper_left_corner_x{ 0 }, upper_left_corner_y{ 0 }, lower_right_corner_x{ 0 }, lower_right_corner_y{ 0 };
	cout << "Введите координаты вершин прямоугольника: "
		<< "\nкоординаты левого верхнего угла по оси Х: " << endl;
	cin >> upper_left_corner_x;
	cout << "координаты левого верхнего угла по оси Y: " << endl;
	cin >> upper_left_corner_y;

	cout << "\nкоординаты правого нижнего угла по оси Х: " << endl;
	cin >> lower_right_corner_x;
	cout << "координаты правого нижнего угла по оси Y: " << endl;
	cin >> lower_right_corner_y;

	cout << "\nВедите координаты Вашей \"точки\" :" << endl;

	cout << "координаты точки по оси Х: " << endl;
	int point_coordinates_x{ 0 };
	cin >> point_coordinates_x;

	cout << "координаты точки по оси Y: " << endl;
	int point_coordinates_y{ 0 };
	cin >> point_coordinates_y;

	cout << "\nПринадлежит ли эта точка указанному выше прямоугольнику ?" << endl;

	if (point_coordinates_x >= upper_left_corner_x
		&& point_coordinates_x <= lower_right_corner_x
		&& point_coordinates_y >= upper_left_corner_y
		&& point_coordinates_y <= lower_right_corner_y)
		cout << "\nПринадлежит." << endl;
	else
		cout << "Не принадлежит." << endl;

	return 0;
}
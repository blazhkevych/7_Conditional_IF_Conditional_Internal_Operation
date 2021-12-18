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

	cout << "Введите координаты вершин прямоугольника. "
		<< "\nкоординаты левого верхнего угла: " << endl;
	int upper_left_corner{ 0 }, lower_right_corner = { 0 };
	cin >> upper_left_corner;

	cout << "\nкоординаты правого нижнего угла: " << endl;
	cin >> lower_right_corner;

	cout << "Введите координаты точки \"Х\": " << endl;
	int point_coordinates_x = { 0 };
	cin >> point_coordinates_x;

	cout << "Введите координаты точки \"Y\": " << endl;
	int point_coordinates_y = { 0 };
	cin >> point_coordinates_y;





	return 0;
}

/*
вывести в консоли картинку с пары про виндовскую систему координат
*/
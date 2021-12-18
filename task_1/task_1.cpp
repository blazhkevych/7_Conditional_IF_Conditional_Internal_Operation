/*
1. Ввести с клавиатуры пятизначное число и определить,
является ли оно палиндромом, т.е. одинаково читается в
обоих направлениях (например, 12321 – палиндром,
12345 – не палиндром).
*/

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода

	cout << "Введите пятизначное число: " << endl;
	int number{ 0 };
	cin >> number;

	int digit_1{ 0 }, digit_2{ 0 }, digit_3{ 0 }, digit_4{ 0 }, digit_5{ 0 };

	digit_1 = number / 10000;
	//cout << digit_1 << endl;
	digit_2 = number / 1000 % 10;
	//cout << digit_2 << endl;
	digit_3 = number / 100 % 10;
	//cout << digit_3 << endl;
	digit_4 = number / 10 % 10;
	//cout << digit_4 << endl;
	digit_5 = number % 10;
	//cout << digit_5 << endl;

	if (digit_1 == digit_5 && digit_2 == digit_4)
		cout << "Число " << number << " палиндром." << endl;
	else
		cout << "Число " << number << " не палиндром." << endl;

	return 0;
}
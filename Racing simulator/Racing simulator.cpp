#include <iostream>
#include <string>
#include "Choice.h"
#include "Result.h"

int main()
{
	using namespace std;

	setlocale(LC_ALL, "rus");
	system("chcp 1251");
	system("cls");

	int a{}, b{}, c{}, d{}, j{}, u{}; //а - тип гонки, b - дистанция, c - выбор действия, d - выбор ТС, u - колличество зарегестрированных ТС.
	double Time{};
	string temp, ptr;

	do {

		cout << "Добро пожаловать в гоночный симулятор!" << endl;
		cout << "1. Гонка для наземного транспорта" << endl;
		cout << "2. Гонка для воздушного транспорта" << endl;
		cout << "3. Гонка для наземного и воздушного транспорта" << endl; 
		cout << "Выберите тип гонки: "; cin >> a;
		cout << endl;

	} while ((a != 1) && (a != 2) && (a != 3));

	do {

		cout << "Укажите длину дистанции (должна быть положительная): "; cin >> b; cout << endl; 

	} while (b <= 0);

	cout << "Должно быть зарегестрировано хотя бы 2 транспортных стедства" << endl;

	do {

		cout << "1. Зарегистрировать транспорт" << endl;
		cout << "Выберите действие: "; cin >> c; cout << endl;

	} while (c != 1);

	Choice(a, d, b, u, Time, ptr,temp);//Главная функция
	system("cls");

	do {

		cout << "1. Зарегестрировать транспорт" << endl;
		cout << "2. Начать гонку" << endl;
		cout << "Выберите действие: "; cin >> j;
		cout << endl; system("cls");

		if (j == 1)

			Choice(a, d, b, u, Time, ptr, temp); system("cls");

		if (j == 2)

			result(b,d);

	} while (j != 0 && j !=2 );

	system("pause");
	return EXIT_SUCCESS;
}
/*
* а - Тип гонки
* b - Дистанция
* c - Выбор действия
* d - Выбор ТС
* j - Итоговый выбор перед концом игры
* u - Колличество зарегестрированных ТС
* temp - сохраняет в себе названия выбранного ТС для вывода через перемнную ptr
*/
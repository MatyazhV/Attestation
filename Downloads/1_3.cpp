﻿#include <iostream>
using namespace std;
float n;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите число: " << endl;
	cin >> n;
	if (n < 5)
	{
		cout << n * 3 << endl;
	}
	else if (n > 7)
	{
		cout << n + 3 << endl;
	}
	else
		cout << n / 10 << endl;
	return 0;
}
// Проанализируем условие задачи. Нужно проверить число и преобразовать из с помощью  арифметических действий.
// Решить задачу оптимельнее с помощью условного оператора if, для этого потребуется переменная типа float, тк потребуется деление на 10.
// В процессе решения потребуется два сравнения, первое проверяет число, меньше ли оно 5, второе больше ли оно 7.
// Если оно больше 7, то прибовляем к нему 3, если оно меньше 5, то умножаем на 3, иначе делим его на 10.
// Для вывода кирилицы подключим соответсвующую библиотеку.
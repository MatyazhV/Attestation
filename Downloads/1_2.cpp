﻿
#include <iostream>
using namespace std;
float a, b;
int main()
{
	setlocale(LC_ALL, "Rus");
	cin >> a >> b;
	if (b != 0)
	{
		cout << a / b << endl;
	}
	else
		cout << "На ноль делить нельзя" << endl;
return 0;
}

// Проанализируем условие задачи. По условию нам нужно разделить полученные от пользователя числа одно на другое. Учтем, что на ноль делить нельзя.
// Для этого нам понадобятся 2 переменные (с плавающей точкой), обозначим их a и b, и обработка стандартного пользовательского ввода.
// Оптимально использовать условный оператор if для проверки знаменателя на равенство 0.
// После проверки, если знаменатель(b) не равен 0, то мы выводим a деленное на b, иначе выводим " на ноль делить нельзя ", сделав это с помощью стандартного вывода.
// Для вывода кирилицы подключим соответсвующую библиотеку.
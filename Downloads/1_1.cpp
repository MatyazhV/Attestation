﻿
#include <iostream>
using namespace std;
int a, b, c, max1;
int main()
{
	cin >> a;
	cin >> b;
	cin >> c;
	if (a >= b)
	{
		max1 = a;
	}
	else
		max1 = b;
	if (c > max1)
	{
		max1 = c;
	}
	cout << max1;
	return 0;
	
}
// Проанализируем условие задачи.Из условия задачи следует, нужно получить от пользователя 3 числа, сравнив их, найти из них максимальное.
// Поскольку эти элементы мы получаем от пользователя, нам понадобится 3 переменные ( целочисленные) и обработка стандартного пользователького ввода.
// Обозначим переменные a,b,c. Также нам понадобится переменная для хранения максмального значения. Обозначим ее max1.
// Для решения задачи оптимально использовать условный оператор if.
// Сравним числа a и b, найдем из них максимальное и присвоим его значение переменной max1.
// Сравним числа c и max1, если с больше max1, присваиваем значение с переменной max1, иначе max1 остается неизменной.
// После выполнения алгоритма нам понадобится стаднартный вывод максимального значения.
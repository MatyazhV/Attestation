﻿
#include <iostream>
using namespace std;
int n,p,sum;
int main()
{
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        p = 1;
        for (int j = i; j <= i * 2; j++)
        {
            p *= j;
        }
        sum += p;
    }
    cout << sum << endl;
    return 0;
}


// Проанализируем условие задачи. Нам требуется посчитать сумму некой последовательности.
// Из условия можно предположить, что последовательность заканчивается числом, полученным от пользователя.
// Для этого нам понадобится целочисленная переменная, обозначим ее n, и стандартный пользовательский ввод.
// Каждый элемент последовательности состоит из произведения натуральных чисел, а в произведении первый элемент в 2 раза меньше последнего.
// Остальные элементы последовательности больше на единицу предыдущего элемента.
// Для решения задачи оптимально использовать  два цикла, первы будет перебирать натуральные числа от 1 до n, первый элемент произведения совпадает с их значиением. А вложенный для вычисления самого произведения.
// После выхода из вложенного цикла вычисляется сумма произведений.
// После выхода из основного цикла выполняется стандартный вывод суммы. 
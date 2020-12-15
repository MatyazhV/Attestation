
#include <iostream>
using namespace std;
int n, m, s;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите кол-во чисел последовательности: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите число последовательности  " << i << endl;
		cin >> s;
		if (i == 1)
		{
			m = s;
		}
	}
	if (m == 0 )
	{
		cout << "Первый элемент 0" << endl;
	}
	else if (m > 0)
	{
		cout << "Первый элемент положительный" << endl;
	}
	else
	{
		cout << "Первый элемент отрицательный" << endl;
	}
}



#include <iostream>
using namespace std;
int n,max1,s;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите кол-во чисел последовательности: " << endl;
	cin >> n;
	cout << "Введите 1 число последовательности: " << endl;
	cin >> s;
	max1 = s;
	for (int i = 2; i <= n; i++)
	{
		cout << "Введите число последовательности  " << i << endl;
		cin >> s;
		if (s > max1)
		{
			max1 = s;
		}
	}
	cout << max1 << endl;
}

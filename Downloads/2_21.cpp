
#include <iostream>
using namespace std;
int a,b;
bool flag = false;
int main()
{
	setlocale(LC_ALL, "");
	cin >> b;
	cin >> a;
	while (a != 0)
	{
		if (a <= b)
		{
			flag = true;
		}
		b = a;
		cin >> a;
	}
	if (flag == true)
	{
		cout << "Последователность не упорядочена" << endl;
	}
	else
		cout << "Последователность упорядочена" << endl;
}
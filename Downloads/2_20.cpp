
#include <iostream>
#include <cmath>
using namespace std;
float n,a,z;
bool flag = false;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите n" << endl;
    cin >> n;
    cout << "Введите z" << endl;
    cin >> z;
    for (int i = 1; i <= n; i++)
    {
        if (n > 0)
        {
            a = sin(n + i / n);
            cout << a << " ";
            if (z == a)
            {
                flag = true;
            }
        }
    }
    cout << endl;
    if (flag == true)
    {
        cout << "Число " << z << " найдено" << endl;
    }
    else
    {
        cout << "Число " << z << " не найдено" << endl;
    }
}
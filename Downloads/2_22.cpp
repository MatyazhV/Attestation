
#include <iostream>
#include <cmath>
using namespace std;
float n, a, z,max1;
bool flag = false;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите n" << endl;
    cin >> n;
    max1 =  sin(n + 1 / n);
    for (int i = 1; i <= n; i++)
    {
        if (n > 0)
        {
            a = sin(n + i / n);
            cout << a << " ";
            if (a > max1)
            {
                max1 = a;
                z = i;
            }
        }
    }
    cout << endl;
    cout << max1 << " " << z;
}

#include <iostream>
#include <cmath>
using namespace std;
float a, c, b,D,x1,x2;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Введите c" << endl;
    cin >> c;
    D = pow(b, 2) - 4 * a * c;
    cout << "Дискриминант равен: " << D << endl;
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << x1 << " " << x2 << endl;
    }
    else if (D < 0)
    {
        cout << "Корней нет" << endl;
    }
    else
    {
        x1 = -b / (2 * a);
        cout << x1 << endl;
    }
}
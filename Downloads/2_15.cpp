
#include <iostream>
using namespace std;
int n,z;
bool flag = false;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите число" << endl;
    cin >> n;
    cout << "Введите цифру" << endl;
    cin >> z;
    while (n > 0)
    {
        if (n % 10 == z)
        {
            flag = true;
        }
        n /= 10;
    }
    if (flag == true)
    {
        cout << "Цифра " << z << " входит" << endl;
    }
    else
    {
        cout << "Цифра не входит" << endl;
    }
}
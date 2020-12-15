#include <iostream>
using namespace std;
int n, pr;
int main()
{
    pr = 1;
    setlocale(LC_ALL, "Rus");
    cout << "Введите n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pr *= i;
    }
    cout << pr << endl;
}

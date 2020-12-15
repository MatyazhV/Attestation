
#include <iostream>
using namespace std;
int n, sum;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

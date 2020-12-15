
#include <iostream>
using namespace std;
int n,sum;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите число" << endl;
    cin >> n;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    cout << sum << endl;
}
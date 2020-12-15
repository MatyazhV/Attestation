
#include <iostream>
using namespace std;
int n,s,max1,min1;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите кол-во чисел последовательности: " << endl;
    cin >> n;
    cout << "Введите 1 число последовательности: " << endl;
    cin >> s;
    max1 = s;
    min1 = s;
    for (int i = 2; i <= n; i++)
    {
        cout << "Введите число " << i << endl;
        cin >> s;
        if (s > max1)
        {
            max1 = s;
        }
        if (s < min1)
        {
            min1 = s;
        }
    }
    cout << min1 + max1 << endl;
} 
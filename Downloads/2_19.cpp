#include <iostream>
using namespace std;
int n, s;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            s += -1 * i;
        }
        else
        {
            s += i;
        }
    }
    cout << s << endl;
}
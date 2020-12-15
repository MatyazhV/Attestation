
#include <iostream>
using namespace std;
int n,s;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
        else
        {
            s += -1 * i;
        }
    }
    cout << s << endl;
}
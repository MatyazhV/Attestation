
#include <iostream>
#include <cmath>
using namespace std;
float  n, x,sum,fact;
int main()
{
    cin >> n;
    cin >> x;
    sum += 1 + x;
    fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
        sum += pow(x, i) / fact;
    }
    cout << sum << endl;
}
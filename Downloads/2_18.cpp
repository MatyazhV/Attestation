
#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    while (n != 0)
    {
        cout << n % 10;
        n /= 10;
    }
}
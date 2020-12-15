
#include <iostream>
using namespace std;
int n,star;
int main()
{
    cin >> n;
    star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        star++;
        cout << endl;
    }
}
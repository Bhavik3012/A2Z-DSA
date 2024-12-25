#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        for (int k = 0; k <= 2 * (n - i - 1); k++)
        {
            cout << " ";
        }
        for (int m = i; m >= 1; m--)
        {
            cout << m<<" ";
        }
        cout << endl;
    }
    return 0;
}
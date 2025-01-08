#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != 0)
            {
                count++;
            }
        }
    }
    if (count > 2)
    {
        cout << "Not a prime " << endl;
    }
    else
        cout << "IS prime" << endl;

    return 0;
}
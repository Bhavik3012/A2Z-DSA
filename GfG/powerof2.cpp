#include <bits/stdc++.h>
using namespace std;
bool isPowerofTwo(long long n)
{

    for (int i = 0; i <= n / 2; i++)
    {
        if (n == pow(2, i))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n = 1;
    cout << isPowerofTwo(n);
    return 0;
}
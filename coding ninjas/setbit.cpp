#include <bits/stdc++.h>
using namespace std;

int countBits(int n)
{
    int k = 0;
    for (int i = 8; i >= 0; i--)
    {
        if (n >= pow(2, i))
        {
            k = k + 1;
            n = n - pow(2, i);
        }
    }
    return k;
}

int main()
{
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
}
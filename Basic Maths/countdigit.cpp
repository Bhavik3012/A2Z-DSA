#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 24046;
    int k = 0;
    int m = N;
    while (N > 0)
    {
        int j = N % 10;
        if (j == 0)
        {
        }

       else  if (m % j == 0)
        {
            k = k + 1;
        }

        N = N / 10;
    }
    cout << k;
    return 0;
}
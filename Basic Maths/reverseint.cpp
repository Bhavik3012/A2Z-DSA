#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 2391;
    int revnum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        revnum = revnum * 10 + ld;
    }
    cout << revnum;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 371  3digit so 3^3 + 7^3 + 1^3 that is armstrong only cubes not squre or others
    int n = 371;
    int dn = n;
    int sum = 0;
    cout << "Is " << n << " armstrong" << endl;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        sum = sum + (ld * ld * ld);
    }
    if (sum == dn)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void decimaltobinary(int a[], int b[], int n)
{
    a[0] = 0;
    for (int i = 7; i >= 4; i--)
    {
        if (n >= pow(2, i))
        {
            a[7 - i + 1] = 1;
        }
        else
        {
            a[7 - i + 1] = 0;
        }
        cout << a[7 - i ];
    }
    cout << endl;

    for (int i = 3; i >= 0; i--)
    {
        if (n >= pow(2, i))
        {
            b[3 - i] = 1;
        }
        else
        {
            b[3 - i] = 0;
        }
        cout << b[3 - i];
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        swap(a[i], b[i]);
        cout << a[i];
    }
}

int binarytodecimal(int a[], int b[], int n)
{
    int k[8], ans;
    for (int i = 0; i < 4; i++)
    {
        if (i < 4)
        {
            k[i] = a[i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (i < 4)
        {
            k[i + 4] = b[i];
        }
    }
    for (int i = 7; i >= 0; i--)
    {
        ans = ans + k[7 - i] * pow(2, i);
    }
    return ans;
}

int main()
{
    int n = 100;
    int a[4], b[4];
    decimaltobinary(a, b, n);
    // cout << binarytodecimal(a, b, n);
    // int a[4] = {0, 0, 0, 0}, b[4] = {0, 0, 0, 1};
    // decimaltobinary(a, b, n);
    // cout << binarytodecimal(a, b, n);
    // 0110 0100
    return 0;
}

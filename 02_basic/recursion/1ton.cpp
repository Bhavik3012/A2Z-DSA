#include <bits/stdc++.h>
using namespace std;
int i = 0;
int N = 10;
void uptoN()
{
    i++;
    if (i == N + 1)
    {
        return;
    }
    else
    {
        cout << i << " ";
        uptoN();
    }
}
int main()
{
    uptoN();
    return 0;
}
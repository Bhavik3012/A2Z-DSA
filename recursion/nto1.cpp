#include <bits/stdc++.h>
using namespace std;

void uptoN(int N)
{

    if (N == 0)
    {
        return;
    }
    else
    {
        cout << N << " ";
        N--;
        uptoN(N);
    }
}
int main()
{
    int N = 10;
    uptoN(N);
    return 0;
}
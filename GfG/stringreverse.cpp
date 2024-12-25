#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Geeks";
    int k = str.size();
    char str1[k];
    for (int i = 0; i <= k; i++)
    {
        str1[i] = str[k - i - 1];
    }

    cout << str1;
    return 0;
}
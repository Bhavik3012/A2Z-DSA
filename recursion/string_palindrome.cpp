#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s)
{

    if (i >= s.size() / 2)
    {
        return true;
    }
    else if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    else
    {
        return f(i + 1, s);
    }
}

int main()
{
    string s = "mandam";
    cout << f(0, s);
    return 0;
}
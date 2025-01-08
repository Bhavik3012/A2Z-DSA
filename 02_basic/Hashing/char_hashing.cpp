#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string ";
    cin >> s;
    // precompute
    int hash[256] = {0};
    for (int i = 0; i < 256; i++)
    {
        hash[s[i]]++;
    }

    int q;
    cout << "Enter the query number ";
    cin >> q;
    while (q--)
    {
        char character;
        cout << "Enter the character ";
        cin >> character;
        // fetching
        cout << hash[character] << endl;
    }
    return 0;
}
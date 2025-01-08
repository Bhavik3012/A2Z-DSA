#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> ls;
    cin >> n;
    cout << "Divisor of " << n << " are below" << endl;

    // O(sqrt n )
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (n / i != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // O(nlog n )  : n is the number of factor
    sort(ls.begin(), ls.end());
    // O(number of factor)
    for (auto it : ls)
    {
        cout << it << " ";
    }

    return 0;
}
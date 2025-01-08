#include <bits/stdc++.h>
using namespace std;

bool compt(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }
    // they are same
    if (p1.first > p2.first)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int a, n;
    vector<int> v;
    sort(a, a + n);           // increasing order
    sort(v.begin(), v.end()); // increasing order

    sort(a + 2, a + 4); // increasing order

    sort(a, a + n, greater<int>); // decending order sort

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // MY WAY SORT
    // sort it according to second element
    // if second element is same , then sort
    // if according to first element but in descending

    sort(a, a + n, comp); // comp is boolean function

    // ans {{4,1},{2,1},{1,2}}

    int num = 7;
    int cnt = __builtin_popcount(); // it's count the set bit (1) in the given number

    long long num = 132423423342;
    int cnt = __builtin_popcountll(); // other ll will apply for long long integer

    string s = "123";

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // if their are no premutation it will return null
    // If you want all permutation you should start from the sorted guy
    // if you don't provide it will strat counting permutation from where it was

    int maxi = *max_element(a, a + n);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Map has key and value
    // Map stores in {key, value}format
    // Map stores only unique key
    // Map also stores in sorted order
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2;         //{1,2},{key,value}
    mpp.insert({3, 1}); //{3,1}
    mpp2[{2, 3}] = 10;  //{{2,3},10}   , {key,value}

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it2 = mpp.find(3);
    // cout << *(it2).second;

    auto it = mpp.find(5);
    // This is the syntax

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty are same as shows

    // MULTIMAP : Can store Duplicate Keys
    // UNORDEREDMAP : same as set and unordered set

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_back(5);     //{5,2,4}
    ls.emplace_front(6); //{2,4}

    //rest function are same as vector 
    return 0;
}
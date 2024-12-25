#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);    //{ } -> {1}
    v.emplace_back(2); // { 1 } -> { 1 , 2 }

    vector<pair<int, int>> vec; // { , }

    vec.push_back({1, 2});  //{1, 2 }
    v.emplace_back(1, 2);   //{1, 2, 1,2}
    vec.emplace_back(1, 2); //{} -> {1,2}

    vector<int> v(5, 100); //{100,100,100,100,100}

    vector<int> v(5); //{0,0,0,0,0}

    vector<int> v1(5, 20);
    vector<int> v2(v1); // v2 will be another container same as v1 after this also we can increase the size of the v2

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> dq;
    dq.push_back(1);    //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4);   //{4,1,2}

    dq.pop_back(); //{4,1}

    dq.back();
    dq.front();
    return 0;
}

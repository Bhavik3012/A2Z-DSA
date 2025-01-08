#include <bits/stdc++.h>
using namespace std;

// push has O(log n )
// top has O(1)
// pop has O(log n )

// queue First in First Out
int main()
{
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.emplace(3); //{1,2,3}

    q.back() += 5;            // add 5 in back means in 3
    cout << q.back() << endl; // print 8

    q.pop(); //{2,8}
    cout << q.front();
    return 0;
}
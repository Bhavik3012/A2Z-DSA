#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top() << endl; // print 10

    pq.pop();

    cout << pq.top()<<endl;

    // size swap empty function same as others

    // minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);     //{5}
    pq1.push(2);     //{2,5}
    pq1.push(9);     //{2,5,9}
    pq1.emplace(10); //{2,5,9,10}

    cout << pq1.top(); // print 2

    return 0;
}
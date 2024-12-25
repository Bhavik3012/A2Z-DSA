#include <bits/stdc++.h>
using namespace std;
// all are in O(1) time complexity
int main()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{2}
    st.push(3);    //{3}
    st.push(4);    //{4}
    st.emplace(5); //{5}

    cout << st.top() << endl;  // print 5
    st.pop();                  // remove 5 //top element
    cout << st.top() << endl;  // print 4
    cout << st.size() << endl; // 4
    cout << st.empty() << endl;
    stack<int> st1, st2;
    st1.swap(st2);
    return 0;
}
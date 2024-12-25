#include <bits/stdc++.h>
using namespace std;

// set = everything in sorted order and just unique

int main()
{
    set<int> st;
    st.insert(1);  //{1}
    st.emplace(2); //{1,2}
    st.insert(2);  //{1,2}  // this will not add more than 1   2
    st.insert(4);  //{1,2,4}
    st.insert(3);  //{1,2,3,4}

    // Functionality of insert in vector
    // can be used also, that only increase
    // efficiency

    // ex. {1,2,3 4,5}
    auto it = st.find(3);
    //{1,2,3,4,5}
    auto it = st.find(6); // if element is not in set it always return st.end()  means after last element
    //{1,2,3,4,5}
    st.erase(5); // delete 5

    // we can earse(start, end) also
    // Multi set contain multiple occurence of single number also in sorting order
    //unordered set only store unique number not in sorted 
    //in unordered_set lower_bound and upper_bound  will not work
    //mostly we get time complexity of unordered_set it O(1) rarely we get O(N)
    return 0;
}
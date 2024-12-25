#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.emplace_back(23, 20);

    // example vector = {3,12,1,5,6};
    // iterator will store memory address of vector
    vector<int>::iterator it = v.begin(); // v.begin will point to the memory of 3 in the above example
    it++;

    cout << *(it) << " "; //*[it] will print the value of it not memory location

    it = it + 2;
    cout << *(it) << " ";

    // vector<int>::iterator it = v.end(); // v.end will points to the memory which is AFTER the last element so use it-- to access the last memory of vector
    //  vector<int>::iterator it = v.rend();   // v.rend will points to the before the first element means not 0 index it will be -1 index
    //  vector<int>::iterator it = v.rbegin(); // v.rbegin will points to the last element's memory ALSO IF WE DO IT++ it WILL INCREASE IN REVERSE IF WE DO ONE TIME IT++ WE GET SECOND LAST MEMORY LOCATION OF VECTOR

    cout << v[0] << " " << v.at(0); // FOR PRINTING THE VECTOR

    cout << v.back() << " "; // this will be last element

    // printing the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // this is we use for printing shortcut
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // best way to print
    //  one more way -,for each loop
    for (auto it : v)
    {
        cout << it << " ";
    }

    // deletion of vector
    // example {10,20,30,40}
    v.erase(v.begin() + 1); //{10,30,40} 20 will be deleted

    v.erase(v.begin() + 1, v.begin() + 3); // erase(start,end), start is included and end is not included
    // in first example the above line we execute ans {10,40}

    // Insert Function

    vector<int> v(2, 100);          //(100,100)
    v.insert(v.begin(), 300);       //{300,100,100}
    v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

    vector<int> copy(2, 50);                       //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    // how many elements in vecotr // size
    //{10,30}
    cout << v.size(); // 2

    //{10,20}
    v.pop_back(); //{10}

    // swapping
    // v1 -> {10,30}
    // v2 -> {230, 50}
    // v1.swap(v2);//v1->{230,50} v2-> {10,30}

    v.clear(); // erase the entire vector
    cout << v.empty();
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << endl
         << p.second << endl;
    
    // pair<int, pair<int, int>> p1 = {1, {2, 3}};
    // cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;

    // pair <int, int> arr[]= {{1,2},{1,3}, {2,3}};
    // cout<<endl<<arr[1].second;
    return 0;
}
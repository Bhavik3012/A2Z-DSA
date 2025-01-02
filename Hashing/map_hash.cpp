#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of array ";
    cin >> n;
    int arr[n];
    cout << "Enter the array " << endl;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // pre-compute
        mpp[arr[i]]++;
    }

    // iterate in map
    // for(auto it:mpp){
    //     cout<<it.first <<"->"<<it.second<<endl;
    // }

    int q;
    cout << "Enter the query number ";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter the number ";
        cin >> number;
        // fetching
        cout << mpp[number] << endl;
    }

    return 0;
}
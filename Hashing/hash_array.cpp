#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of array ";
    cin >> n;
    int arr[n];
    cout << "Enter the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //precompute:
    int hash[13]= {0};
    for(int i = 0; i <n;i++) {
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"Enter the query number ";
    cin>>q;
    while(q--){
        int number;
        cout <<"Enter the number ";
        cin>>number;
        //fetching
        cout<<hash[number]<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr)
{
    std::reverse(arr.begin(), arr.end());
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> vec(arr, arr + 5);
    reverseArray(vec);

    for (int num : vec)
    {
        cout << num << " ";
    }
    return 0;
}
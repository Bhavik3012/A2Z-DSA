#include <iostream>
using namespace std;

void reverse(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

int main(int argc, char const *argv[])
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

    reverse(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

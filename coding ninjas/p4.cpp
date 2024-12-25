#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (char k = 'A'; k <= 'A' + i; k++)
        {
            cout << k;
        }
        for (char ch = 'A'+i-1; ch >= 'A'; ch--)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}
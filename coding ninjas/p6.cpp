#include <iostream>
using namespace std;

int main()
{
    int n = 4, k = 4;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (i == 1 || i == 2 * n - 1 || j == 1 || j == 2 * n - 1)
            {
                cout << n;
            }
            else if (i == j && i == n)
            {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}
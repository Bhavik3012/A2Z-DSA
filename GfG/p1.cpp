#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >0 ; j--)
        {
            for (int k = 1; k <= n-i+1; k++)
            {
                cout<<j <<" ";
            }
            
        }
        cout<<'$';
        
    }
    return 0;
}
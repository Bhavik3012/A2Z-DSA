#include <bits/stdc++.h>
using namespace std;
int n = 0;
void print()
{

    if (n != 5)
    {
        cout << "Bhavik" << endl;
        n++;
        print();
    }
    else
        return;
}
int main()
{

    print();
    return 0;
}
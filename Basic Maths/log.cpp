#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1234;
    int count = (int)(log10(n) + 1);
    cout << count;
    return 0;
}


//time complexity  O(log10(n))
//IF NUMBER OF ITERATION ARE DEPEDNING ON DIVISION THEN ALAWAYS TIME COMPLEXITY WILL SHOW LOG 
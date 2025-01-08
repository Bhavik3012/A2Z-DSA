#include <bits/stdc++.h>
using namespace std;

//O(log5(min(a,b)))   >   O(min(a,b))

long long computeGCD(long long A, long long B)
{
    while (B != 0)
    {
        long long temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

vector<long long> lcmAndGcd(long long A, long long B)
{
    long long gcd = computeGCD(A, B);
    long long lcm = (A / gcd) * B;
    return {lcm, gcd};
}

int main(int argc, char const *argv[])
{
    long long A = 12, B = 8;
    cout << lcmAndGcd;
    return 0;
}

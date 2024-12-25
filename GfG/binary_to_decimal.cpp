#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int binary_to_decimal(string str)
{
    int sum = 0;

    for (int i = str.size(); i > 0; i--)
    {

        if (str[str.size() - i] == 49)
        {
            sum = sum + (pow(2, i - 1));
        }
    }

    return sum;
}
int main()
{
    char str[] = "C++ Programming is awesome";
    string sr = "110";

    cout << binary_to_decimal(sr);

    return 0;
}
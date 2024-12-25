#include <iostream>
using namespace std;
string isVowel(char c)
{
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'i' || c == 'I')
    {
        return "YES";
    }
    else
        return "NO";
}
int main()
{
    char c = 'a';
    cout << isVowel(c);
    return 0;
}
class Solution
{
public:
    int add(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            ans = ans + n % 10;
            n = n / 10;
        }
        return ans;
    }
    int addDigits(int num)
    {
        while (num >= 10)
        {
            num = add(num);
        }
        return num;
    }
};
class Solution
{
public:
    int fib(int n)
    {
        int n0 = 0;
        int n1 = 1;
        int ans = 0;
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                ans = n0 + n1;
                n0 = n1;
                n1 = ans;
            }
            return ans;
        }
    }
};
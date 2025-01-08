class Solution
{
public:
    bool isPalindrome(int x)
    {
        int revnum = 0;
        int oldx = x;
        while (x != 0)
        {
            int lastdigit = x % 10;
            if ((revnum > INT_MAX / 10) || (revnum < INT_MIN / 10))
            {
                break;
            }

            x = x / 10;
            revnum = revnum * 10 + lastdigit;
        }
        if (oldx < 0)
        {
            return false;
        }
        else if (oldx == revnum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class Solution
{
public:
    int minimizeXor(int num1, int num2)
    {
        int countSetBits = __builtin_popcount(num2); // Number of 1's in num2
        int result = 0;

        // Set bits in `result` to align with `num1` as much as possible
        for (int i = 31; i >= 0 && countSetBits > 0; i--)
        {
            if (num1 & (1 << i))
            {                       // If bit `i` in num1 is set
                result |= (1 << i); // Set the same bit in result
                countSetBits--;
            }
        }

        // If there are still bits to be set, set them in the lowest available positions
        for (int i = 0; i < 32 && countSetBits > 0; i++)
        {
            if (!(result & (1 << i)))
            {                       // If bit `i` in result is not set
                result |= (1 << i); // Set the bit
                countSetBits--;
            }
        }

        return result;
    }
};

class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int maxIncreasing = 1, maxDecreasing = 1;
        int currInc = 1, currDec = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                currInc++;
                currDec = 1;
            }
            else if (nums[i] < nums[i - 1])
            {
                currDec++;
                currInc = 1;
            }
            else if (nums[i] == nums[i - 1])
            {
                currDec = 1;
                currInc = 1;
            }
            maxIncreasing = max(currInc, maxIncreasing);
            maxDecreasing = max(currDec, maxDecreasing);
        }
        return max(maxIncreasing, maxDecreasing);
    }
};
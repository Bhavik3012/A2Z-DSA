class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int maxsum = nums[0];
        int cursum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                cursum = cursum + nums[i];
            }
            else
            {
                cursum = nums[i];
            }
            maxsum = max(maxsum, cursum);
        }
        return maxsum;
    }
};
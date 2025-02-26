class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int maxprefixsum = 0;
        int minprefixsum = 0;
        int prefixsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            prefixsum += nums[i];

            maxprefixsum = max(maxprefixsum, prefixsum);
            minprefixsum = min(minprefixsum, prefixsum);
        }
        return maxprefixsum - minprefixsum;
    }
};
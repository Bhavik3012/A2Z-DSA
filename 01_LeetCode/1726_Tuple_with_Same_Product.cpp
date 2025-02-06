class Solution
{
public:
    int tupleSameProduct(vector<int> &nums)
    {
        unordered_map<int, int> HashSum;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                HashSum[nums[i] * nums[j]]++;
            }
        }
        int ans = 0;
        for (const auto &[key, value] : HashSum)
        {
            if (HashSum[key] >= 2)
            {
                ans = ans + (HashSum[key]) * (HashSum[key] - 1) * 4;
            }
        }

        return ans;
    }
};
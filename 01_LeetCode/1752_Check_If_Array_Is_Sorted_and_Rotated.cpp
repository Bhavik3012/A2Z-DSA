class Solution
{
public:
    bool check(vector<int> &nums)
    {
        vector<int> sorted;
        for (int i = 0; i < nums.size(); i++)
        {
            sorted.emplace_back(nums[i]);
        }
        sort(sorted.begin(), sorted.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int i = 0; i < nums.size() - 1; i++)
            {
                swap(nums[i], nums[i + 1]);
            }
            int count = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == sorted[i])
                {
                    count++;
                }
            }
            if (count == nums.size())
                return true;
        }
        return false;
    }
};
class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        long long sum = 0;
        long long n = nums.size();
        unordered_map<long long, long long> freq_of_nums;

        for (int i = 0; i < n; i++)
        {
            freq_of_nums[nums[i] - i]++;
        }
        for (auto i : freq_of_nums)
        {
            if (i.second > 1)
            {
                sum = sum + i.second * (i.second - 1) / 2;
            }
        }
        return n * (n - 1) / 2 - sum;
        // nums[i]-i != nums[j]-j
    }
};
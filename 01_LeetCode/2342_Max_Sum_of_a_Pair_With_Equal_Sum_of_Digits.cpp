class Solution {
    public:
        int calculatedigitsum(int n) {
            int digitsum = 0;
            while (n > 0) {
                digitsum = digitsum + (n % 10);
                n = n / 10;
            }
            return digitsum;
        }
        int maximumSum(vector<int>& nums) {
            vector<pair<int, int>> digitsums;
            for (int i = 0; i < nums.size(); i++) {
                digitsums.push_back({calculatedigitsum(nums[i]), nums[i]});
            }
            sort(digitsums.begin(), digitsums.end());
    
            int maxPairsum = -1;
            for (int i = 1; i < digitsums.size(); i++) {
                int currentDigitsum = digitsums[i].first;
                int previousDigitsum = digitsums[i - 1].first;
    
                if (currentDigitsum == previousDigitsum) {
                    int currentSum = digitsums[i].second + digitsums[i - 1].second;
                    maxPairsum = max(maxPairsum, currentSum);
                }
            }
            return maxPairsum;
        }
    };
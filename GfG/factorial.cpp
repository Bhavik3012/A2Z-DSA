class Solution {
  public:

    vector<long long> factorialNumbers(long long n) {
        vector<long long> ans;
        for(int i =1;i<=ceil(n/2)+1;i++){
            ans.emplace_back(i);
            
        }
        return ans;
    }
};
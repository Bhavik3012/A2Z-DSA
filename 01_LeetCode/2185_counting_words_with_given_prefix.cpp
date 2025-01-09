class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length();
        int ans = 0;
        for(const auto& word:words){
            int wordlength= word.length();
            int count = 0;
            if(wordlength>=n){
            for(int i = 0 ;i<n;i++){
                
                if(word[i]==pref[i]){
                    count++;
                }
            }}
            if(count == n){
                ans++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int> maxfreq;
        for(char ch:s){
            maxfreq[ch]++;
        }
        int oddcounts = 0;
        int evencounts = 0;
        for(const auto& [key,value]:maxfreq){
            if(maxfreq[key]%2!=0){
                oddcounts++;
            }   
            else if(maxfreq[key]%2 == 0){
                evencounts++;
            }         
        }
        if(oddcounts>k || k > s.length()){
            return false;
        }
       
        else {
            return true;
        }
    }
};
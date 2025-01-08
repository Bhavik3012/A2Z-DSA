class Solution {
public:
    int strStr(string haystack, string needle) {
        int length_needle = needle.length();
        if(length_needle > haystack.length()){
            return -1;
        }
        for(int i = 0;i<haystack.length()-length_needle+1;i++){
            int count = 0;
            for(int j=0;j<length_needle;j++){
                if(haystack[j+i]==needle[j])
                {
                    count++;
                }
            }
            if(count == length_needle){
                return i;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int minimumLength(string s) {
    unordered_map<char, int> freq_of_s;
    for (auto &c : s)
    {
        freq_of_s[c]++;
    }
    int count = 0;
    for (const auto& [key,value] : freq_of_s)
    {
        if (freq_of_s[key] >= 2 && freq_of_s[key]%2==0)
        {
            count = count + 2;
        }
        else if (freq_of_s[key] == 1 || freq_of_s[key]%2!=0)
        {
            count++;
        }
    }
    return count;
    }
};
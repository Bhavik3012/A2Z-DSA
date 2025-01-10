class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> answer;
        unordered_map<char, int> maxFreq;
        for (const auto& word : words2) {
            unordered_map<char, int> freq;
            for (char c : word) {
                freq[c]++;
            }
            for (const auto& [key, value] : freq) {
                maxFreq[key] = max(maxFreq[key] ,value );
            }
        }
        for (const auto& word : words1) {
            unordered_map<char, int> freq;
            for (char c : word) {
                freq[c]++;
            }
            bool isUniversal = true;
            for (const auto& [key, value] : maxFreq) {
                if (freq[key] < value) {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal) {
                answer.emplace_back(word);
            }
        }

        return answer;
    }
};
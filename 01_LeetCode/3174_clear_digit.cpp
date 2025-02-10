class Solution
{
public:
    string clearDigits(string s)
    {
        vector<int> number_index;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                number_index.push_back(i);
            }
        }
        int temp = 0;
        for (int i = 0; i < number_index.size(); i++)
        {
            s.erase(number_index[i], 1);
            s.erase(number_index[i] - 1, 1);
            if (i < number_index.size() - 1)
            {
                temp = temp + 2;
                number_index[i + 1] = number_index[i + 1] - temp;
            }
        }
        return s;
    }
};
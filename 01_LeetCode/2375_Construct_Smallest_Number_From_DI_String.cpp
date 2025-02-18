class Solution
{
public:
    string smallestNumber(string pattern)
    {
        stack<int> numstack;
        string result;

        int d = 0;
        for (int i = 0; i <= pattern.size(); i++)
        {
            numstack.push(i + 1);
            if (pattern[i] == 'I' || i == pattern.size())
            {
                while (!numstack.empty())
                {
                    result += to_string(numstack.top());
                    numstack.pop();
                }
            }
        }

        return result;
    }
};
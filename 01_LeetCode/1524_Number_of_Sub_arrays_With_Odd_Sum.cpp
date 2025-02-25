class Solution
{
public:
    int numOfSubarrays(vector<int> &arr)
    {
        const int modulo = 1e9 + 7;
        int answer = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int subarraysum = 0;
            for (int j = i; j < n; j++)
            {
                subarraysum += arr[j];
                cout << subarraysum << " ";
                if (subarraysum % 2 != 0)
                    answer++;
            }
        }

        return answer % modulo;
    }
};
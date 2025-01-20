class Solution
{
public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        unordered_map<int, pair<int, int>> positions;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int value = mat[i][j];
                positions[value] = {i, j};
            }
        }

        vector<int> rowFrequency(mat.size(), 0);
        vector<int> colFrequency(mat[0].size(), 0);

        for (int i = 0; i < m * n; i++)
        {
            int value = arr[i];
            auto [row, col] = positions[value];

            rowFrequency[row]++;
            colFrequency[col]++;
            if (rowFrequency[row] == n || colFrequency[col] == m)
            {
                return i;
            }
        }
        return -1;
    }
};
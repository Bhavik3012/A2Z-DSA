class Solution
{
public:
    int countServers(vector<vector<int>> &grid)
    {
        unordered_map<int, pair<int, int>> coordinate;
        int row = grid.size();
        int col = grid[0].size();
        int index = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    coordinate[index] = make_pair(i, j);
                    index++;
                }
            }
        }

        set<int> answer;
        for (int i = 0; i < coordinate.size() - 1; i++)
        {
            for (int j = i + 1; j < coordinate.size(); j++)
            {
                if (coordinate[i].first == coordinate[j].first)
                {
                    answer.insert(i);
                    answer.insert(j);
                }
            }
            for (int j = i + 1; j < coordinate.size(); j++)
            {
                if (coordinate[i].second == coordinate[j].second)
                {
                    answer.insert(i);
                    answer.insert(j);
                }
            }
        }
        return answer.size();
    }
};
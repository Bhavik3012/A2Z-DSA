#include <bits/stdc++.h>
using namespace std;

vector<int> eventualSafeNodes(vector<vector<int>> &graph)
{
    vector<int> terminal_nodes;

    for (int i = 0; i < graph.size(); i++)
    {
        if (graph[i].size() < 1)
        {
            terminal_nodes.push_back(i);
        }
    }
    vector<int> ans;
    for (int i = 0; i < graph.size(); i++)
    {
        if (graph[i].size() < 1)
        {
            continue;
        }
        else if (graph[i].size() > terminal_nodes.size())
        {
            continue;
        }
        else
        {
            int cnt = 0;
            for (int j = 0; j < graph[i].size(); j++)
            {
                int cnt2 = 0;
                for (int k = 0; k < terminal_nodes.size(); k++)
                {
                    if (graph[i][j] == terminal_nodes[k])
                    {
                        cnt2++;
                    }
                }
                if (cnt2 == 1)
                {
                    cnt++;
                }
            }
            if (cnt == graph[i].size())
            {
                ans.push_back(i);
            }
        }
    }
    for (int i = 0; i < terminal_nodes.size(); i++)
    {
        ans.push_back(terminal_nodes[i]);
    }

    for (int i = graph.size() - 1; i >= 0; i--)
    {
        if (graph[i].size() < 1)
        {
            continue;
        }
        else if (graph[i].size() > terminal_nodes.size())
        {
            continue;
        }
        else
        {
            int cnt = 0;
            for (int j = 0; j < graph[i].size(); j++)
            {
                int cnt2 = 0;
                for (int k = 0; k < terminal_nodes.size(); k++)
                {
                    if (graph[i][j] == terminal_nodes[k])
                    {
                        cnt2++;
                    }
                }
                if (cnt2 == 1)
                {
                    cnt++;
                }
            }
            if (cnt == graph[i].size())
            {
                ans.push_back(i);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<vector<int>> graph = {
        {},
        {0, 2, 3, 4},
        {3},
        {4},
        {}};

    vector<int> k = eventualSafeNodes(graph);

    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }

    return 0;
}
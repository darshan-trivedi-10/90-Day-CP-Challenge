// https://leetcode.com/problems/is-graph-bipartite/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkForBipartite(vector<vector<int>> &adj, int visited[], int node)
    {
        visited[node] = 1;
        queue<int> q;
        q.push(node);

        while (!q.empty())
        {
            int currNode = q.front();
            q.pop();
            for (auto it : adj[currNode])
            {
                if (visited[it] == -1)
                {
                    visited[it] = 1 - visited[currNode];
                    q.push(it);
                }
                else if (visited[it] == visited[currNode])
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>> &adj)
    {
        int n = adj.size();
        int visited[n];
        memset(visited, -1, sizeof visited);
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == -1)
            {
                if (!checkForBipartite(adj, visited, i))
                {
                    return false;
                }
            }
        }

        return true;
    }
};
int main()
{

    return 0;
}
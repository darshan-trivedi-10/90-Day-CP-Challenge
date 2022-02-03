// https://leetcode.com/problems/partition-labels/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        int n = s.size();
        int lastPosition[26] = {-1};
        for (int i = 0; i < n; i++)
        {
            int currInd = s[i] - 'a';
            lastPosition[currInd] = i;
        }
        vector<int> partSize;
        int maxi = -1, lastI = 0;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, lastPosition[(int)(s[i] - 'a')]);
            if (maxi == i)
            {
                partSize.push_back(i - lastI + 1);
                lastI = i + 1;
            }
        }

        return partSize;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
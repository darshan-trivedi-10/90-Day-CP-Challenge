// https://leetcode.com/problems/max-chunks-to-make-sorted/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int maxChunksToSorted(vector<int> &arr)
    {
        int n = arr.size(), Chunks = 0;
        int maxEle = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxEle)
            {
                maxEle = arr[i];
            }
            if (maxEle == i)
            {
                Chunks++;
            }
        }

        return Chunks;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
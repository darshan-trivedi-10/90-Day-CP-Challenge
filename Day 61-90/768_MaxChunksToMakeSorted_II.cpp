// https://leetcode.com/problems/max-chunks-to-make-sorted-ii/
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
        int n = arr.size();
        vector<int> minArr(n + 1, INT_MAX);
        int chunks = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            minArr[i] = min(arr[i], minArr[i + 1]);
        }
        int maxEle = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxEle = max(maxEle, arr[i]);
            if (maxEle <= minArr[i + 1])
            {
                chunks++;
            }
        }

        return chunks;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
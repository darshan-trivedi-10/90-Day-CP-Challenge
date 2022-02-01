// https://leetcode.com/problems/largest-number-at-least-twice-of-others/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int max1 = 0, max2 = 0, idxOfMax1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max1)
            {
                max2 = max1;
                max1 = nums[i];
                idxOfMax1 = i;
            }
            else if (nums[i] > max2)
            {
                max2 = nums[i];
            }
        }
        return max1 >= max2 * 2 ? idxOfMax1 : -1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
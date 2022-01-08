// https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    bool canPair(vector<int> nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[(nums[i] % k + k) % k]++;
        }

        bool ans = true;
        if (mpp[0] % 2 != 0)
        {
            ans = false;
            return ans;
        }
        for (int i = 1; i < k; i++)
        {
            if (mpp[i] != mpp[k - i])
            {
                ans = false;
                break;
            }
        }

        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
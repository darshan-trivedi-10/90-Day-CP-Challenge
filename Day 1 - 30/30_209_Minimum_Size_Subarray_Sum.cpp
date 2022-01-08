// https://leetcode.com/problems/minimum-size-subarray-sum/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &arr)
    {
        int e = 0, s = 0;
        int n = arr.size();
        int sum = 0;
        int ans = INT_MAX;
        while (e < n)
        {
            sum += arr[e];
            if (sum < target)
            {
                e++;
            }
            else if (sum >= target)
            {
                while (sum >= target)
                {
                    ans = min(ans, e - s + 1);
                    sum -= arr[s];
                    s++;
                }
                e++;
            }
        }
        if (ans == INT_MAX || ans < 0)
            return 0;
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
// https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int numSubarrayBoundedMax(vector<int> &arr, int left, int right)
    {
        int n = arr.size();
        int totalSubarray = 0;
        int s = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= left && arr[i] <= right)
            {
                count = i - s + 1;
                totalSubarray += count;
            }
            else if (arr[i] < left)
            {
                totalSubarray += count;
            }
            else
            {
                s = i + 1;
                count = 0;
            }
        }

        return totalSubarray;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
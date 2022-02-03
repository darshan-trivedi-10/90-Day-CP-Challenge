// https://leetcode.com/problems/sort-array-by-parity/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    bool checkOdd(int num)
    {
        return ((num & 1) != 0);
    }

    bool checkEven(int num)
    {
        return ((num & 1) == 0);
    }

    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int n = nums.size();
        int odd = n - 1, even = 0;
        while (even < odd)
        {
            if (checkOdd(nums[even]) && checkEven(nums[odd]))
            {
                swap(nums[even], nums[odd]);
                even++, odd--;
            }
            if (checkEven(nums[even]))
            {
                even++;
            }
            if (checkOdd(nums[odd]))
            {
                odd--;
            }
        }

        return nums;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
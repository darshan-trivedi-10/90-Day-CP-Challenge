// https://leetcode.com/problems/maximum-product-of-three-numbers/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int maximumProduct(vector<int> &arr)
    {
        int n = arr.size();
        // Total 3 case possible :
        // 0 1 2 3 4 5 6
        // -5 -4 -3 -2 -1
        // -5 -4 -3 -2 -1 0 1 2 3 4 5
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int currElem = arr[i];
            if (currElem <= min1)
            {
                min2 = min1;
                min1 = currElem;
            }
            else if (currElem < min2)
            {
                min2 = currElem;
            }

            if (currElem >= max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = currElem;
            }
            else if (currElem >= max2)
            {
                max3 = max2;
                max2 = currElem;
            }
            else if (currElem > max3)
            {
                max3 = currElem;
            }
        }
        return max(min1 * min2 * max1, max1 * max2 * max3);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
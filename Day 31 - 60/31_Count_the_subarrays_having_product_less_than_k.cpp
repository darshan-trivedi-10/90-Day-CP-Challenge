// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    //  1 2
    int countSubArrayProductLessThanK(const vector<int> &arr, int n, long long k)
    {
        int ans = 0, j = 0;
        long long int pro = 1;
        for (int i = 0; i < n; i++)
        {
            pro *= arr[i];
            while (j < n && pro >= k)
            {
                pro = pro / arr[j];
                j++;
            }

            ans += (i - j + 1);
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
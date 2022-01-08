// https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'
#define ull unsigned long long

class Solution
{
public:
    // #define ull unsigned long long
    /* Function to get the nth ugly number*/
    ull getNthUglyNo(int n)
    {
        ull dp[n + 1] = {1};
        dp[1] = 1;
        ull p2 = 1, p3 = 1, p5 = 1;

        for (int i = 2; i <= n; i++)
        {
            ull f1 = 2 * dp[p2];
            ull f2 = 3 * dp[p3];
            ull f3 = 5 * dp[p5];

            ull minv = min({f1, f2, f3});
            dp[i] = minv;
            if (minv == f1)
            {
                p2++;
            }
            if (minv == f2)
            {
                p3++;
            }
            if (minv == f3)
            {
                p5++;
            }
        }

        return dp[n];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
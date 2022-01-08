// https://www.interviewbit.com/problems/distribute-in-circle/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int solve(int n, int k, int m)
{
    int ans = (n + m - 1) % k;
    if(ans==0)
    {
        return k;
    }
    return ans;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    cout << solve(n, m, k);

    return 0;
}
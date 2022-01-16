#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int nextGreaterElement(int n)
    {
        string s = to_string(n);
        next_permutation(s.begin(), s.end());
        long long int res = stoll(s);
        if (res > INT_MAX || res <= n)
        {
            return -1;
        }
        return res;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
lli power(lli a, lli b, lli mod = (1e9 + 7))
{
    lli ans = 1;
    // if(b%2==1) this means number b is odd.
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b = (b >> 1);
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        cout << "a^-1 --> " << power(a, m - 2) << endl;
    }

    return 0;
}
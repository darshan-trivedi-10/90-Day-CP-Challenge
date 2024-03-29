// https://codeforces.com/contest/1554/problem/B

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long int;
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'

#define ha cout << "YES \n";
#define na cout << "NO\n";
#define all(z) z.begin(), z.end()
#define pt(s) cout << s << endl;
#define ff first
#define ss second
#define um unordered_map
#define us unordered_set
#define nline cout << "\n";
#define pb emplace_back

template <typename T>
void input(T a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

template <typename O>
void output(O a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void ans()
{
    int n, k;
    cin >> n >> k;
    ll arr[n];
    input(arr, n);

    ll ans = -(1e12);
    for (ll i = n - 1; i >= max(1, n - 201); i--)
    {
        for (ll j = i - 1; j >= max(0, n - 201); j--)
        {
            ll curr = ((i + 1) * (j + 1)) - k * (arr[i] | arr[j]);
            ans = max(ans, curr);
        }
    }

    pt(ans)
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        // if (ray)
        // cout << "Case #" << s << ":\n";
        ans();
        s++;
    }
    return 0;
}

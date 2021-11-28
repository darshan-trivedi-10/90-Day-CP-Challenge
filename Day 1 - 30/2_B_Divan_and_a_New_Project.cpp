// https://codeforces.com/contest/1614/problem/B

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
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
void input(T &a, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
}

template <typename O>
void output(O &a, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void ans()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    input(arr, n);
    ll l = 1, m = -1;
    sort(all(arr));
    reverse(all(arr));
    vector<ll> ans(n);
    ll t = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans[arr[i].second] = l;
            t += (2 * l * arr[i].first);
            l++;
        }
        else
        {
            ans[arr[i].second] = m;
            t += (-2 * m * arr[i].first);
            m--;
        }
    }

    pt(t)
            cout
        << 0 << " ";
    output(ans, n);

    nline
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
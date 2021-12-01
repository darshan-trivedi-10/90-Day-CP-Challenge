// https://codeforces.com/contest/1602/problem/A
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
    string s;
    cin >> s;
    char ans = 'z';
    for (int i = 0; i < s.size(); i++)
    {
        ans = min(ans, s[i]);
    }
    string aa = "";
    bool a = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (a == 0 && ans == s[i])
        {
            a = 1;
        }
        else
        {
            aa.push_back(s[i]);
        }
    }

    cout << ans << " " << aa << endl;
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

// https://codeforces.com/contest/1613/problem/A

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
    string a, b;
    int e1, e2;
    cin >> a >> e1 >> b >> e2;

    while (a.size() > 0 && a.back() == '0')
    {
        a.pop_back();
        e1++;
    }
    while (b.size() > 0 && b.back() == '0')
    {
        b.pop_back();
        e2++;
    }

    if (a.size() + e1 > (b.size() + e2))
    {
        pt('>')
    }
    else if (a.size() + e1 < (b.size() + e2))
    {
        pt('<')
    }
    else
    {
        if (a > b)
        {
            pt('>')
        }
        else if (b > a)
        {
            pt('<')
        }
        else
        {
            pt('=')
        }
    }
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
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}

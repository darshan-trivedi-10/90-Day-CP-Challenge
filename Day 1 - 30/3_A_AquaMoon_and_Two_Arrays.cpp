// https://codeforces.com/contest/1546/problem/A

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
    int n;
    cin >> n;
    int arr[n], b[n];
    input(arr, n);
    input(b, n);
    ll as = accumulate(arr, arr + n, 0);
    ll bs = accumulate(b, b + n, 0);

    if (as != bs)
    {
        pt(-1) return;
    }

    vector<int> v, v1;

    for (int i = 0; i < n; i++)
    {
        int x = arr[i] - b[i];
        if (x > 0)
        {
            while (x--)
            {
                v.push_back(i);
            }
        }
        else if (x < 0)
        {
            x *= -1;
            while (x--)
            {
                v1.push_back(i);
            }
        }
    }

    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] + 1 << " " << v1[i] + 1 << "\n";
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
        // if (ray)
        // cout << "Case #" << s << ":\n";
        ans();
        s++;
    }
    return 0;
}

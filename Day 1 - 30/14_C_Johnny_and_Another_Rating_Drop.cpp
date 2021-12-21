/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||

*/
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
#define cbb __builtin_popcountll

/*Keep learning
Keep doing
keep upsolving*/
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

void ans(map<ll, ll> mpp)
{
    ll n;
    cin >> n;

    ll ans = 0;
    ll i = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans += mpp[pow(2, i)];
        }

        i++;
        n /= 2;
    }

    pt(ans)
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    map<ll, ll> mpp;
    mpp[1] = 1;
    for (ll i = 2; i <= (1e18 + 10); i *= 2)
    {
        mpp[i] = mpp[i / 2] * 2 + 1;
    }

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans(mpp);
        s++;
    }
    return 0;
}
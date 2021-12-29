// https://codeforces.com/problemset/problem/489/C
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

void ans()
{
    int m, s;
    cin >> m >> s;

    if (m == 1 && s == 0)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    if (s > (m * 9) || (s == 0 and m > 0))
    {
        cout << -1 << " ";
        pt(-1)
    }
    else
    {
        int m1 = m, s1 = s;
        if (m > 1 and s1 <= (m1 - 1) * 9)
        {
            cout << 1;
            s1--, m1--;
        }
        string ans = "";
        while (m1--)
        {
            ans += to_string(min((int)9, s1));
            s1 -= min((int)9, s1);
        }

        for (int i = ans.size() - 1; i > -1; i--)
        {
            cout << ans[i];
        }
        cout << " ";
        while (m--)
        {
            cout << min((int)9, s);
            s -= min((int)9, s);
        }
        nline
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
    // cin>>t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}
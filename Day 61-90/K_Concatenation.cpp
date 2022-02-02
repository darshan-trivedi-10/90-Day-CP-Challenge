// https://www.codechef.com/JAN18/problems/KCON
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    lli sum = 0;
    lli ans = *max_element(all(arr));
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        else
        {
            ans = max(ans, sum);
        }
    }

    if (k > 1)
    {
        lli p = 0, s = 0, pref = 0, suff = 0;
        for (int i = 0; i < n; i++)
        {
            p += arr[i];
            s += arr[n - 1 - i];

            pref = max(pref, p);
            suff = max(suff, s);
        }

        if (pref + suff > 0)
        {
            lli sum1 = max(accumulate(all(arr), 0LL), 0LL);
            ans = max(pref + suff + (k - 2) * sum1, ans);
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
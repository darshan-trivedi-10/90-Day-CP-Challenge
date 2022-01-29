#include <bits/stdc++.h>
using namespace std;

int Sqrt(int n)
{
    int s = 0, e = n;
    int ans = 0;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (m * m == n)
        {
            return m;
        }
        else if ((m * m) > n)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << Sqrt(n);

    return 0;
}
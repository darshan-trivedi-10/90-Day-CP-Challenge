// https://codeforces.com/contest/1501/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n] = {0};
        bool ans[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int k = 0;
        for (int i = n - 1; i >= 0; i--)
        {

            if (arr[i] > 0)
            {
                if (k > 0)
                {
                    k--;
                }
                ans[i] = 1;
                arr[i]--;
                if (arr[i] >= k)
                {
                    k = arr[i];
                }
                if (k == 0)
                    k += arr[i];
            }
            else if (k > 0)
            {
                k--;
                ans[i] = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
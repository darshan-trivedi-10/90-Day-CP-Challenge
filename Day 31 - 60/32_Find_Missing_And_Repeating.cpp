// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

//  47
//  13 33 43 16 25 19 23 31 29 35 10 2 32 11 47 15 34 46 30 26 41 18 5 17 37 39 6 4 20 27 9 3 8 40 24 44 14 36 7 38 12 1 42 12 28 22 45

class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        sort(arr, arr + n);
        int *ans = new int[2];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                ans[0] = arr[i];
                break;
            }
        }
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == num)
            {
                num++;
            }
        }

        ans[1] = num;

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;

    return 0;
}
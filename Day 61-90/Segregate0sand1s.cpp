// https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

void segregate0and1(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        cout << s << " " << e << endl;
        if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++, e--;
        }
        if (arr[s] == 0)
        {
            s++;
        }
        if (arr[e] == 1)
        {
            e--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    segregate0and1(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
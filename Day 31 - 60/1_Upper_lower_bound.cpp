#include <bits/stdc++.h>
using namespace std;

int l_bound(vector<int> &arr, int target)
{
    //  function returns the index of the next smallest number just greater than or equal to that number.
    int n = arr.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] < target)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return s;
}


int U_bound(vector<int> &arr, int target)
{
    //  first element in the range [first, last) that is greater than value, or last if no such element is found.
    int n = arr.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        // cout << s << " " << e << endl;
        if (arr[m] <= target)
        {
            s = m + 1;
        }
        else
        {
            e = m-1;
        }
    }
    if (s < n && arr[s] <= target)
    {
        s++;
    }

    return s;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    cout << l_bound(arr, target) << endl;
    cout << U_bound(arr, target) << endl;

    return 0;
}
/*
Given an sorted arrar and element X, finds out the first element which if 
greater than the X.

arr = [1, 3, 5, 7, 9, 10]
x = 7, ans = 9
x = 8, ans = 9
x = 11, ans = -1

Note : Must use Binary Search.
*/

#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int element)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        //  If the element is <= x, then we need to search on right
        if (arr[m] <= element)
        {
            s = m + 1;
        }
        //  > x, then we neet first, hence move left
        else
        {
            e = m - 1;
        }
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

    int ele;
    cin >> ele;
    int ub = upperBound(arr, ele);
    if (ub == n)
    {
        cout << "Bigger than All\n";
    }
    else
    {
        cout << arr[ub];
    }

    return 0;
}
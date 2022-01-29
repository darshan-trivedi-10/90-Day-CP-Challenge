/*
Given an sorted arrar of duplicates number, finds out occurence of x. 
arr = [1,2,2,2,3,4,4,4,5]
x = 3
Output : 
Note : Must use Binary Search.
*/
#include <bits/stdc++.h>
using namespace std;

int occurence(vector<int> arr, int element)
{
    //  We can solve using upper_bound and lower_bound.
    int n = arr.size();
    int s = 0, e = n - 1;
    int first = -1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == element)
        {
            first = m;
            e = m - 1;
        }
        else if (arr[m] > element)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    if (first != -1)
    {
        s = 0, e = n - 1;
        int last = 0;
        while (s <= e)
        {
            int m = (s + e) / 2;
            if (arr[m] == element)
            {
                last = m;
                s = m + 1;
            }
            else if (arr[m] > element)
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }

        return last - first+1;
    }

    return 0;
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
    cout << occurence(arr, ele);

    return 0;
}
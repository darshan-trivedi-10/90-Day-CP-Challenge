/*

Given an sorted arrar of duplicates number, finds out the last index of x. if element is not present return -1;
arr = [1,2,2,2,3,4,4,4,5]
x = 4
Output : 7
Note : Must use Binary Search.

*/
#include <bits/stdc++.h>
using namespace std;

int last_occurence(vector<int> arr, int element)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        //  If Found lets find somewhere on the right again.
        if (arr[m] == element)
        {
            ans = m;
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

    return ans;
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
    cout << last_occurence(arr, ele);

    return 0;
}
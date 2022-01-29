/*
---> Count the all subset whose sum is divisible by k.

Input 
3 3  
4 2 2

Output :
3

*/
#include <bits/stdc++.h>
using namespace std;

int subset_count(int arr[], int s, int n, int sum, int k)
{
    if (s == n)
    {
        //  When we have to count use this.
        return (sum % k == 0) ? 1 : 0;
    }

    sum += arr[s];
    int l = subset_count(arr, s + 1, n, sum, k);
    sum -= arr[s];
    int r = subset_count(arr, s + 1, n, sum, k);
    return l + r;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << subset_count(arr, 0, n, 0, k);

    return 0;
}



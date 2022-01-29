/*
---> Print the all subset whose sum is divisible by k.

Input 
3 3
4 2 2

Output :
4 3 2 
4 2   
3 
*/
#include <bits/stdc++.h>
using namespace std;

void subset_sum(int arr[], vector<int> &ds, int s, int n, int sum, int k)
{
    if (s == n)
    {
        if (sum % k == 0)
        {
            // Print DS - O(N)
            for (auto it : ds)
            {
                cout << it << " ";
            }
            if (ds.size() == 0)
            {
                cout << "Empty";
            }
            cout << endl;
        }
        return;
    }

    sum += arr[s];
    ds.push_back(arr[s]);
    subset_sum(arr, ds, s + 1, n, sum, k);
    ds.pop_back();
    sum -= arr[s];
    subset_sum(arr, ds, s + 1, n, sum, k);
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
    vector<int> ds(0);
    subset_sum(arr, ds, 0, n, 0, k);

    return 0;
}
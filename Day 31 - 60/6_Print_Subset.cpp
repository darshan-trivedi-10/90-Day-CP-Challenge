//  ---> Print the all subset of the array.
#include <bits/stdc++.h>
using namespace std;


//  Convert the problem in the index-wise question. so you can find base case easily. - striver

void subset(int arr[], vector<int> &ds, int s, int n)
{
    if (s == n)
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

        return;
    }

    ds.push_back(arr[s]);
    subset(arr, ds, s + 1, n);
    ds.pop_back();
    subset(arr, ds, s + 1, n);
}

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
    subset(arr, ds, s + 1, n);
    ds.pop_back();
    sum -= arr[s];
    subset(arr, ds, s + 1, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ds(0);
    subset(arr, ds, 0, n);

    return 0;
}
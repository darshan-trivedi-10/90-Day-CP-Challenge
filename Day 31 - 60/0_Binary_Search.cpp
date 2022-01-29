#include <bits/stdc++.h>
using namespace std;

// Time Complexity of Binar Search is O(log2(N)) & Space Complexity is O(1). 
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
    int s = 0, e = n - 1;
    bool check = 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == target)
        {
            cout << target << " is at index " << m << endl;
            check = 0;
            break;
        }
        else if (arr[m] < target)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    if (check)
    {
        cout << "Element Not Found\n";
    }

    return 0;
}
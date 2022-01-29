#include <bits/stdc++.h>
using namespace std;

//  Try with diffrent example, and compare with end element.
class Solution
{
public:
    int findMin(vector<int> &arr)
    {
        int n = arr.size();
        int s = 0, e = n - 1;
        while (s < e)
        {
            int m = (s + e) / 2;
            if (arr[m] < arr[e])
            {
                e = m;
            }
            else
            {
                s = m + 1;
            }
        }

        return arr[s];
    }
};
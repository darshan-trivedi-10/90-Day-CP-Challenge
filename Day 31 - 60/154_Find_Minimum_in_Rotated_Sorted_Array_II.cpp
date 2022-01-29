#include <bits/stdc++.h>
using namespace std;

/*

Edge Case ---> 
Input : 1 1 1 0 0 1
Input : 0 1 1 1 1 1
Input : 1 0 0 1 1 1 1

*/

// O(1) For the worst case
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
            else if (arr[m] > arr[e])
            {
                s = m + 1;
            }
            else
            {
                e--;
            }
        }

        return arr[s];
    }
};
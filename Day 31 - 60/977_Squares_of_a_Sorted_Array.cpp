// https://leetcode.com/problems/squares-of-a-sorted-array/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &arr)
    {
        int n = arr.size();
        int point = n;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                point = i;
                break;
            }
        }
        int up = point, down = point - 1;
        while (up < n && down >= 0)
        {
            if (arr[up] > (-arr[down]))
            {
                ans.push_back(arr[down] * arr[down]);
                down--;
            }
            else
            {
                ans.push_back(arr[up] * arr[up]);
                up++;
            }
        }

        while (up < n)
        {
            ans.push_back(arr[up] * arr[up]);
            up++;
        }
        while (down >= 0)
        {
            ans.push_back(arr[down] * arr[down]);
            down--;
        }

        return ans;
    }
};

// Same Approche, but diffrent implementation

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n);
        int left = 0, right = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (abs(arr[left]) > abs(arr[right]))
            {
                ans[i] = arr[left] * arr[left];
                left++;
            }
            else
            {
                ans[i] = arr[right] * arr[right];
                right--;
            }
        }

        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
// https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        int i = 0, j = 0;

        while (j < n)
        {
            if (j - i + 1 < k)
            {
                pq.push({arr[j], j});
                j++;
            }
            else
            {
                pq.push({arr[j], j});
                int t = pq.top().first;
                ans.push_back(t);

                while (!pq.empty())
                {
                    if (pq.top().second <= i)
                    {
                        pq.pop();
                    }
                    else
                    {
                        break;
                    }
                }
                i++, j++;
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
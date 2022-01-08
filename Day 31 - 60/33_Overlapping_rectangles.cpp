// https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[])
    {
        int l1x = l1[0], l1y = l1[1], r1x = r1[0], r1y = r1[1], l2x = l2[0], l2y = l2[1], r2x = r2[0], r2y = r2[1];
        if (l1x > r2x || l2x > r1x)
        {
            return 0;
        }
        if (((l1y < r2y || l2y < r1y)))
        {
            return 0;
        }
        return 1;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
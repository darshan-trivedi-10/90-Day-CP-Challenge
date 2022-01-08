// https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    long long squaresInChessBoard(long long n)
    {
        long long ans = (n * (n + 1) * ((2 * n + 1))) / 6;
        return ans;
    }
};

int main()
{
    lli n;
    cin >> n;
    ll ans = 0;
    ans = (n * (n + 1) * ((2 * n + 1))) / 6;
    cout << ans << endl;

    return 0;
}
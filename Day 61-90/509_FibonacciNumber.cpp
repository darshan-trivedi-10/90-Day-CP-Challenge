// https://leetcode.com/problems/fibonacci-number/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int fib(int N)
    {
        double phi = (sqrt(5) + 1) / 2;
        return round(pow(phi, N) / sqrt(5));
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
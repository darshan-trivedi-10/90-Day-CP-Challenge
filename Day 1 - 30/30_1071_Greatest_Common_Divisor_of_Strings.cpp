// https://leetcode.com/problems/greatest-common-divisor-of-strings/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;

class Solution
{
public:
    string gcdOfStrings(string s1, string s2)
    {
        string ans = "";
        // O(s1.size() + s2.size())
        
        if (s1 + s2 == s2 + s1)
        {
            int gcd = __gcd(s1.length(), s2.length());
            ans = s2.substr(0, gcd);
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
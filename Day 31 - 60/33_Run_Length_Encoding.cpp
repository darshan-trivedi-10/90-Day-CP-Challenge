// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

string encode(string s)
{
    // Your code here
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        char t = s[i];
        int occ = 1;
        while (i < n && s[i + 1] == t)
        {
            i++;
            occ++;
        }

        ans.push_back(t);
        ans.push_back((occ + '0'));
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    cout << encode(s) << endl;

    return 0;
}
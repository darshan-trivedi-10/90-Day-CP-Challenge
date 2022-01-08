// https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

/*
original string: abbbababbbababbbab
encoded string : 3[a3[b]1[ab]]
*/
class Solution
{
public:
    string decodedString(string s)
    {
        int n = s.size();
        stack<char> st;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ']')
            {
                char temp = st.top();
                while (temp != ']')
                {
                        
                }
                
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
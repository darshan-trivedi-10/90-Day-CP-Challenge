// https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    char digitTochar(int num)
    {
        string s = to_string(num);
        return s[0];
    }
    string printMinNumberForPattern(string s)
    {
        int n = s.size();
        string ans = "";
        stack<int> store;
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            store.push(num);
            if (s[i] == 'I')
            {
                while (!store.empty())
                {
                    int cn = store.top();
                    ans.push_back(digitTochar(cn));
                    store.pop();
                }
            }
            num++;
        }
        store.push(num);

        while (!store.empty())
        {
            int cn = store.top();
            ans.push_back(digitTochar(cn));
            store.pop();
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size(), p = 1, first = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                first++;
            }
        }

        cout << first << endl;

        while (n--)
        {
            if (s[n] != '0')
            {
                cout << (s[n] - '0') * p << " ";
                p *= 10;
            }
            else
            {
                p *= 10;
            }
        }

        cout << endl;
    }

    return 0;
}

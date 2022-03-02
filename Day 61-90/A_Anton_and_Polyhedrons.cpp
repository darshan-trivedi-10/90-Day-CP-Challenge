#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int n, num = 0;
    cin >> n;
    string s[n];
    string a = "Tetrahedron", b = "Cube", c = "Octahedron", d = "Dodecahedron";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == a)
        {
            num += 4;
        }
        else if (s[i] == b)
        {
            num += 6;
        }
        else if (s[i] == c)
        {
            num += 8;
        }
        else if (s[i] == d)
        {
            num += 12;
        }
        else
        {
            num += 20;
        }
    }

    cout << num << endl;
    return 0;
}

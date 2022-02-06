// https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

bool areRotations(string a, string b)
{
    int aSize = a.size(), bSize = b.size();
    if (aSize != bSize)
    {
        return false;
    }

    char firstCharacter = a[0];
    int fcIndex = -1;
    for (int i = 0; i < bSize; i++)
    {
        if (b[i] == firstCharacter)
        {
            fcIndex = i;
            break;
        }
    }

    for (int i = 0; i < aSize; i++)
    {
        if (a[i] != b[(fcIndex % aSize)])
        {
            return false;
        }
        fcIndex++;
    }

    return true;
}

int main()
{
    string a, b;
    cin >> a >> b;

    if (areRotations(a, b))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
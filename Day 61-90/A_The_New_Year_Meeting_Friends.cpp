#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int a1, a2, a3;
    a1 = abs(b - a) + abs(c - a);
    a2 = abs(a - b) + abs(b - c);
    a3 = abs(a - c) + abs(c - b);
    cout << min(a1, min(a2, a3)) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = (k * l) / nl;
    int b = p / np;
    int s = c * d;

    cout << (min(a, min(b, s))) / n << endl;

    return 0;
}

// Find max 10 numbers in a list having 10M entries
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int main()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> p;
    for (int i = 0; i < n; i++)
    {
        ll entrie;
        cin >> entrie;
        p.push(entrie);
        if (p.size() > 10)
        {
            p.pop();
        }
    }

    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }

    return 0;
}
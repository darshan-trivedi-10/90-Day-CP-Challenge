/*
Given an number N, find the sqrt of this number.
Input : N = 100
Output : N = 10

Input : N = 26
output : N = 5

1 <= N <= INT_MAX

Note : Must use Binary Search.


To Avoid Overflow We can write s+(e-s)/2. beacuse if s and e is INT_MAX.

*/
#include <bits/stdc++.h>
using namespace std;

int Cube(int num)
{
    int s = 0, e = num;
    int ans;
    while (s <= e)
    {
        int m = (s + e) / 2;
        long long int x = m * m * m;
        if (x == num)
        {
            return m;
        }
        else if (x > num)
        {
            e = m - 1;
        }
        else
        {
            ans = s;
            s = m + 1;
        }
    }

    return ans;
}

int Sqrt(int num)
{
    int s = 0, e = num;
    int ans;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        long long x = m * m;
        if (x == num)
        {
            return m;
        }
        else if (x > num)
        {
            e = m - 1;
        }
        else
        {
            ans = s;
            s = m + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << Sqrt(n) << endl;
    cout << Cube(n) << endl;

    return 0;
}
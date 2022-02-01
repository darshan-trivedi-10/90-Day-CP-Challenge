// https://leetcode.com/problems/product-of-array-except-self/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        // count (zero)>1 ans is 0;
        int counter = 0;
        for (auto element : nums)
        {
            if (element == 0)
            {
                counter++;
            }
        }

        if (counter > 1)
        {
            for (auto &element : nums)
            {
                element = 0;
            }
        }
        else if (counter == 1)
        {
            int multiply = 1;
            for (auto element : nums)
            {
                if (element != 0)
                {
                    multiply *= element;
                }
            }
            for (auto &element : nums)
            {
                if (element != 0)
                {
                    element = 0;
                }
                else
                {
                    element = multiply;
                }
            }
        }
        else
        {
            int multiply = 1;
            for (auto element : nums)
            {
                multiply *= element;
            }
            for (auto &element : nums)
            {
                element = (multiply / (element));
            }
        }
        return nums;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
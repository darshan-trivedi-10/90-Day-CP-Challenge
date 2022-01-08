/*
GFG --> https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
leetcode --> https://leetcode.com/problems/group-anagrams/
*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

// GFG Solution
class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;
        for (auto it : string_list)
        {
            string temp = it;
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(it);
        }

        for (auto it : mpp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};

// Leetcode Solution
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &string_list)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;
        for (auto it : string_list)
        {
            string temp = it;
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(it);
        }

        for (auto it : mpp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
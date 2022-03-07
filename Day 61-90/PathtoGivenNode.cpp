// https://www.interviewbit.com/problems/path-to-given-node/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool findPath(TreeNode *root, vector<int> &ans, int value)
{
    if (root == NULL)
    {
        return false;
    }
    ans.push_back(root->val);
    if (root->val == value)
    {
        return true;
    }

    if (findPath(root->left, ans, value) || findPath(root->right, ans, value))
    {
        return true;
    }
    ans.pop_back();
    return false;
}

vector<int> solve(TreeNode *root, int value)
{
    vector<int> ans;
    bool isPresent = findPath(root, ans, value);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
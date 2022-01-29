#include <bits/stdc++.h>
using namespace std;

/*
Find which part is sorted
and check where our target have.


*/

class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int s = 0, e = n - 1;
        while (s <= e)
        {
            int m = (s + e) / 2;
            if (arr[m] == target)
            {
                return m;
            }
            else if (arr[m] >= arr[s])
            {
                if (arr[m] > target && arr[s] <= target)
                {
                    e = m - 1;
                }
                else
                {
                    s = m + 1;
                }
            }
            else
            {
                if (target >= arr[m] && target <= arr[e])
                {
                    s = m + 1;
                }
                else
                {
                    e = m - 1;
                }
            }
        }
        return -1;
    }
};class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int s = 0, e = n-1;
        while(s<e){
          int m = (s+e)/2;
          if(arr[m]>arr[m+1]){
            e = m;
          }else{
            s = m+1;
          } 
        }
      
      return s;
    }
};
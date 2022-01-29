class Solution
{
public:
    int findPeakElement(vector<int> &arr)
    {
        int n = arr.size();
        int s = 0, e = n - 1;
        while (s < e)
        {
            int m = (s + e) / 2;
            if (arr[m] > arr[m + 1])
            {
                e = m;
            }
            else
            {
                s = m + 1;
            }
        }

        return s;
    }
};
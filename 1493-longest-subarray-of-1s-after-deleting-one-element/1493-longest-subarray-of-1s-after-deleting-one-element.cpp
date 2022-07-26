class Solution
{
    public:
        int longestSubarray(vector<int> &nums)
        {
            int i = 0, j = 0;
            int mx = INT_MIN;
            int count = 0;
            while (j < nums.size())
            {
                if (nums[j] == 0)
                {
                    count++;
                }
                if (count > 1)
                {
                    while (count > 1)
                    {
                        if (nums[i] == 0) count--;
                        i++;
                    }
                    

                }
                mx = max(mx, j - i + 1);
                j++;
            }
            mx = mx - 1;
            return mx;
        }
};
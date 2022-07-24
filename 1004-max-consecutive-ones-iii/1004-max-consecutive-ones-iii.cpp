class Solution
{
    public:
        int longestOnes(vector<int> &nums, int k)
        {
            int i = 0, j = 0;
            int count = 0;
            int mx = INT_MIN;
            while (j < nums.size())
            {
                if (nums[j] == 0)
                {
                    count++;
                }
                while (count > k)
                {
                    if (nums[i] == 0) count--;
                    i++;
                }
                
                mx = max(mx, j - i + 1);
                j++;
            }
            return mx;
        }
};
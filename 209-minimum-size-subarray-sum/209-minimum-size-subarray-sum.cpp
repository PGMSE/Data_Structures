class Solution
{
    public:
        int minSubArrayLen(int target, vector<int> &nums)
        {
            int i = 0, j = 0;
            int n = nums.size();
            int sum = 0;
            int mn = INT_MAX;

            while (j < n)
            {
                sum += nums[j];
                if (sum < target)
                {
                    j++;
                }
                else if (sum >= target)
                {
                   
                    while (sum >= target)
                    {
                        mn = min(mn, j - i + 1);
                        sum -= nums[i];
                        i++;
                    }
                    
                    j++;
                }
                
            }
            if(mn==INT_MAX) mn=0;
            return mn;
        }
};
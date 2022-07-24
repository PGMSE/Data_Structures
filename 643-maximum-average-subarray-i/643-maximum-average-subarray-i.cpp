class Solution
{
    public:
        double findMaxAverage(vector<int> &nums, int k)
        {
            int sum = 0;
            int i = 0, j = 0;
            double mx = INT_MIN;
            while (j < nums.size())
            {
                sum += nums[j];
                if (j - i + 1 < k)
                {
                    j++;
                }
                else if (j - i + 1 == k)
                {
                    double avg = ((double) sum / k);
                   	// cout<<"sum is"<<avg;
                    mx = max(mx, avg);
                   	// cout<<"max is"<<mx;
                    sum -= nums[i];
                    i++;
                    j++;
                }
            }
            return mx;
        }
};
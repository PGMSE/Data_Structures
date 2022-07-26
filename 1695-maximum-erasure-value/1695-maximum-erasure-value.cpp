class Solution
{
    public:
        int maximumUniqueSubarray(vector<int> &nums)
        {
            int i = 0, j = 0;
            map<int, int> m;
            int sum = 0;
            int mx = INT_MIN;

            while (j < nums.size())
            {
                m[nums[j]]++;
                sum += nums[j];

                if (m.size() == j - i + 1)
                {
                    mx = max(mx, sum);
                
                }
                else if (m.size() < j - i + 1)
                {

                    while (m.size() < j - i + 1)
                    {
                        if (m.find(nums[i]) != m.end())
                        {
                            m[nums[i]]--;
                            if(m[nums[i]]==0){
                                m.erase(nums[i]);
                            }
                            
                            sum-=nums[i];
                           
                        }
                         i++;
                    }
                    
                }
              
                j++;
            }
            return mx;
        }
};
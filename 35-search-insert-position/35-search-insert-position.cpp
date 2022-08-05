class Solution
{
    public:
        int searchInsert(vector<int> &nums, int target)
        {
            int start = 0;
            int end = nums.size() - 1;

            int res;

            while (start <= end)
            {
                int mid = start + (end - start) / 2;

                if (nums[mid] == target)
                {
                    return mid;
                }

                if (nums[mid] > target)
                {
                    res = mid;
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            if (target > nums[nums.size() - 1])
            {
                return nums.size();
            }
            if (target < nums[0])
            {
                return 0;
            }
            return res;
        }
};
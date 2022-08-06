class Solution
{
    public:
        bool isPerfectSquare(int num)
        {

            int start = 1;
            int end = num / 2;

            if (num == 1)
            {
                return true;
            }

            while (start <= end)
            {
                double mid = start + (end - start) / 2;

                if (mid == num/mid)
                {
                    return true;
                }
                if (mid < num/mid)
                {
                    start = mid + 1;
                }
                else if (mid  > num/mid)
                {
                    end = mid - 1;
                }
            }

            return false;
        }
};
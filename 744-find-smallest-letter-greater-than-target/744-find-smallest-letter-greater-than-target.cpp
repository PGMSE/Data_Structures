class Solution
{
    public:
        char nextGreatestLetter(vector<char> &letters, char target)
        {

            int start = 0;
            int end = letters.size() - 1;
            
            int n=letters.size();

            int res;
            
            if(letters[end]==target || letters[end]<target  )
            {
                return letters[start];
            }

            while (start <= end)
            {
                int mid = start + (end - start) / 2;

                if (letters[mid] > target)
                {
                    res = letters[mid];
                    end = mid - 1;
                }
                else if (letters[mid] <= target)
                {
                    start = mid + 1;
                }
            }
            return res;
        }
};
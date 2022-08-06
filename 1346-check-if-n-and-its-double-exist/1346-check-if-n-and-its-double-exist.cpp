class Solution
{
    public:
        bool checkIfExist(vector<int> &arr)
        {

            sort(arr.begin(), arr.end());

            for (int i = 0; i < arr.size(); i++)
            {
                int find = 2 *arr[i];
                int start = 0;
                int end = arr.size() - 1;

                while (start <= end)
                {
                    int mid = start + (end - start) / 2;

                    if (arr[mid] == find && mid != i)
                    {
                        return true;
                    }
                    if (arr[mid] < find)
                    {
                        start = mid + 1;
                    }
                    else
                    {
                        end = mid - 1;
                    }
                }
            }
            return false;
        }
};
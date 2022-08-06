class Solution
{
    public:
        vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)

    {
        set<int> s;
        int sa = 0, sb = 0;

        vector<int> ans;

        for (int i = 0; i < aliceSizes.size(); i++)
        {
            sa += aliceSizes[i];
            s.insert(aliceSizes[i]);
        }
        for (int i = 0; i < bobSizes.size(); i++)
        {
            sb += bobSizes[i];
        }
        int diff = (sa - sb) / 2;

        for (int i = 0; i < bobSizes.size(); i++)
        {
            auto it = s.find(bobSizes[i] + diff);
            if (it != s.end())
            {
                ans.push_back(bobSizes[i] + diff);
                ans.push_back(bobSizes[i]);
                break;
            }
        }

        return ans;
    }
};
class Solution
{
    public:
        int totalFruit(vector<int> &fruits)
        {
            int i = 0, j = 0;
            int n = fruits.size();
            int mx = INT_MIN;

            map<int, int> m;

            while (j < n)
            {
                m[fruits[j]]++;
                if(m.size()<2){
                    j++;
                }
                else if (m.size() == 2)
                {
                    mx = max(mx,j - i + 1);
                     j++;
                }
                else if (m.size() > 2)
                {
                    while (m.size() > 2)
                    {
                        if (m.find(fruits[i])!=m.end())
                        {
                            m[fruits[i]]--;
                            if(m[fruits[i]]==0){
                                m.erase(fruits[i]);
                            }
                        }
                        i++;
                    }
                     j++;
                }
                // j++;
            }
            if(mx==INT_MIN) mx=fruits.size();
            return mx;
        }
};
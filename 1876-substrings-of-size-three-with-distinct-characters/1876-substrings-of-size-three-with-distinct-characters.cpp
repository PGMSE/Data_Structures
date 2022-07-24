class Solution
{
    public:
        int countGoodSubstrings(string s)
        {
            int i = 0, j = 0;

            map<int, int> m;
            int count = 0;
            while (j < s.length())
            {
                m[s[j]]++;
                if (j - i + 1 < 3)
                {
                    j++;
                }
                else if (j - i + 1 == 3)
                {
                    if (m.size() == j - i + 1) count++;

                    if (m.find(s[i]) != m.end())
                    {
                        m[s[i]]--;
                        if (m[s[i]] == 0)
                        {
                            m.erase(s[i]);
                        }
                    }
                    i++;
                    j++;
                }
            }
            return count;
        }
};
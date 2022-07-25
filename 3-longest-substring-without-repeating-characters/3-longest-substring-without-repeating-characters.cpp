class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int i = 0, j = 0;

            map<char, int> m;
            int mx = INT_MIN;
            if(s.size()==0){
                return 0;
            }
            while (j < s.size())
            {

                m[s[j]]++;

                if (m.size() == j - i + 1)
                {

                    mx = max(mx, j - i + 1);
                    j++;
                }
                else if (m.size() < j - i + 1)
                {

                    while (m.size() < j - i + 1)
                    {
                        if (m.find(s[i]) != m.end())
                        {
                            m[s[i]]--;
                            if (m[s[i]] == 0)
                            {
                                m.erase(s[i]);
                            }
                        }
                        i++;
                    }
                    j++;
                }
            }

            return mx;
        }
};
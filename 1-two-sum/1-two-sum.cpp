class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size;
        size = nums.size();
        vector<int> res;
        unordered_map<int, int> map;
        for(int i=0; i < size; ++i){
            if(map.find(target - nums[i]) != map.end()){
                res.push_back(map[target - nums[i]]);
                res.push_back(i);
                return res;
            }
            map[nums[i]] = i;
        }
        return res;
    }
};
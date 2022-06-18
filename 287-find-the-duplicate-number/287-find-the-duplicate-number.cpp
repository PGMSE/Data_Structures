class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            
            m[nums[i]]++;
            
            
        }
        for(auto it:m){
            // cout<<it.first<<it.second<<endl;
            if(it.second>1) return it.first;
        }
        
       return -1;
    }
};
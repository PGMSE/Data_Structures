class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        vector<int> res;
        while(l<=r){
            if(abs(nums[l])<=abs(nums[r])){
                res.push_back(nums[r]*nums[r]);
                r--;
            }else  {
                res.push_back(nums[l]*nums[l]);
                l++;
                
            }
            
        }
        sort(res.begin(),res.end());
            return res;
    }
};
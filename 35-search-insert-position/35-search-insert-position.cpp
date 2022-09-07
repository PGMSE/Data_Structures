class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int res=nums.size();
        
        // cout<<"st->"<<start<<endl;
        //  cout<<"ed->"<<end<<endl;
        //  cout<<"rs->"<<res<<endl;
        
        // if()
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                
                start=mid+1;
            }
            else if(nums[mid]>target)
            {
                res=mid;
                end=mid-1;
            }
        }
        
        return res;
    }
};
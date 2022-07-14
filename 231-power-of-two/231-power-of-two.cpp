class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i=0;i<=30;i++){
            int num=pow(2,i);
            if(n==num) return true;
            
           
        }
        return false;
    }
};
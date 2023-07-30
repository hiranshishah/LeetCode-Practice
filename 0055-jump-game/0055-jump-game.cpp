class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m=0,i=0;
        while(i<nums.size()&&i<=m){
            m=max(m,i+nums[i]);
            i++;
        }
        if(i==nums.size()){
            return true;
        }
        else return false;
       
        
    }
};
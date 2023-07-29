class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>t;
        sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    t.push_back(nums[i+1]);
                }
            }
        return t;
    }
};
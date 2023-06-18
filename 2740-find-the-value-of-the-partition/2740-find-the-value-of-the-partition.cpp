class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int mn =INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            mn = min(nums[i+1]-nums[i],mn);
        }
        return mn;
        
    }
};
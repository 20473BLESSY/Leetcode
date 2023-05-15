class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n= nums.size();
        int mx =-1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++){
            if(nums[i]>nums[j])
            {
                mx = max(mx,nums[i]-nums[j]);
            }
            }
        }
        return mx;
        
    }
};
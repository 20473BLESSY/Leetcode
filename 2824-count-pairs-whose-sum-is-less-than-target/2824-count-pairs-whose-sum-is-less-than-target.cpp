class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int c=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++){
               
                   if((nums[i]+nums[j]) < target)
                   {
                       c++;
                   }
               
                
            }

        }
        return c;
    }
};
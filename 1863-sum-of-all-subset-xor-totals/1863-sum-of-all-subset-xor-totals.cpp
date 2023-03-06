class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        for(int i=0;i<pow(2,n);i++)
        {   int ans=0;
            for(int j=0;j<n;j++)
            {
                if((i >>j)&1 ==1)
                {
                    ans^= nums[j];
                }
            
            }
            sum += ans;
        }
        return sum;
        
    }
};
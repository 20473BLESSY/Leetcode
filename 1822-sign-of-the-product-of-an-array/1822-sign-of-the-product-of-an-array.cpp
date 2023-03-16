class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long sum =0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                c++;
            }
            else if(nums[i] ==0){
                sum =1;
            }
        }
        if(sum == 1)
        {
            return 0;
        }
        else{
        if((c%2)==0)
            return 1;
        else 
            return -1;
        }
    }
};
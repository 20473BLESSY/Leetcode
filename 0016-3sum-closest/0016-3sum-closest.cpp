class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int closest = nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++)
        {
            int p1=i+1,p2=n-1;
            
            while(p1<p2)
            {
                int curr = nums[p1]+nums[p2]+nums[i];
                if(curr == target)
                    return curr;
                if(abs(target-curr) < abs(target-closest))
                {
                    closest = curr;
                }
                else if(target> curr)
                {
                    p1++;
                }
                else{
                    p2--;
                }
            }
        }
        return closest;
    }
};
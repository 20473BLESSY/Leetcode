class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(101,0);
        for(auto i:nums)
        {
            cnt[i]++;
        }
        
        for(auto f : cnt)
        {
            if(f>2)
            {
                return false;
                
            }
        }
        return true;
        
    }
};
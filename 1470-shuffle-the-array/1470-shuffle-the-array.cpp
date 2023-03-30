class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int p1=0,p2=n;
        vector<int>shuffle;
        int k=0;
        while(p1<n && p2<nums.size())
        {
            shuffle.push_back(nums[p1]);
            shuffle.push_back(nums[p2]);
            p1++;
            p2++;
        }
        return shuffle;
    }
};
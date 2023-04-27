class trie{
    public:
    trie* child[2];
    trie(){
        for(int i=0;i<2;i++){
        this->child[i] = NULL;
        }
    }
};

void insert(trie* r, int ele)
{
    for(int i=30;i>=0;i--)
    {
        int k = (ele>>i)&1;
        if(r->child[k] == NULL)
        {
            r->child[k] = new trie();
        }
        r= r->child[k];
    }
}

int maxXor(trie* r, int ele)
{
    int ans =0;
    for(int i=30;i>=0;i--)
    {
        int bit = (ele>>i)&1;
        if(r->child[bit^1] != NULL)
        {
            ans += 1<<i;
            r=r->child[bit^1];
        }
        else{
            r=r->child[bit];
        }
    }
    return ans;
}

class Solution {
public:
    int findMaximumXOR(vector<int>& nums){
        trie* r = new trie();
        for(int i=0;i<nums.size();i++)
        {
            insert(r,nums[i]);
        }
        int ans =0;
        for(int i=0;i<nums.size();i++)
        {
            ans = max(ans,maxXor(r,nums[i]));
        }
        return ans;
        
    }
};
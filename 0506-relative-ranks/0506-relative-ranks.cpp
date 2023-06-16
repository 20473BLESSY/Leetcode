class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int>lis;
        priority_queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            q.push({score[i],i});
        }
        int r=1;
        vector<string>res(n,"0");
        while(!q.empty())
        {
            pair<int,int> p = q.top();
            q.pop();
            if(r==1)
            {
                res[p.second] = "Gold Medal";
            }
            else if( r==2)
            {
                res[p.second] = "Silver Medal";
            }
            else if(r==3)
            {
                res[p.second] ="Bronze Medal";
            }
            else{
                res[p.second] =to_string(r);
            }
            r++;
        }
        return res;
    }
};
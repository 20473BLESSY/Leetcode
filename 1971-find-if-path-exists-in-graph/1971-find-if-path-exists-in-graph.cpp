class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        vector<vector<int>>g(n);
        for(int i=0;i<edges.size();i++)
        {
              g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
           
            
        }
        vector<int>vis(n,0);
        queue<int>q;
        q.push(s);
        vis[s] = 1;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(auto it: g[p])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it] =1;
                }
            }
        }
        if(vis[d] == 1)
        {
            return true;
        }
        else{
            
return false;
        }
        
    }
};
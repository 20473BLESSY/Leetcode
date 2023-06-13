class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,set<char>>m;
        for(int i=1;i<=rings.size();i+=2)
        {
            m[rings[i]-'0'].insert({rings[i-1]});
        }
        int c=0;
        for(auto it:m){
            if(it.second.size() == 3){
                c+=1;
            }
        }
        return c;
        
    }
};
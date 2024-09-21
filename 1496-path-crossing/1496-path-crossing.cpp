class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        set<pair<int,int>>s;
        s.insert({0,0});
        for(char i : path)
        {
            if(i== 'N')  y++;
            if(i=='S')   y--;
            if(i== 'E')  x++;
            if(i== 'W')  x--;
            
            if(s.find({x,y}) != s.end()) return true;
            else s.insert({x,y});
        }
        return false;
    }
};
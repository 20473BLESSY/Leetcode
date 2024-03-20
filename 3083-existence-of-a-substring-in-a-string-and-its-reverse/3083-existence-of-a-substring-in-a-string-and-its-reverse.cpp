class Solution {
public:
    bool isSubstringPresent(string s) {
        string revrse=s;
        reverse(revrse.begin(),revrse.end());
        for(int i=0;i<s.size()-1;i++)
        {
            string sub = s.substr(i,2);
            if(revrse.find(sub) != string::npos)
            {
                return true;
            }
        }
        return false;
    }
};
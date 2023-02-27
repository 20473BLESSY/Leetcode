class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string s1="",s2="",s3="";
        
        for(int i=0;i<firstWord.size();i++)
        {
            int inti= firstWord[i]-97;
            s1+= to_string(inti);
        }
        for(int i=0;i<secondWord.size();i++)
        {
            int inti= secondWord[i]-97;
            s2  += to_string(inti);
        }
        for(int i=0;i<targetWord.size();i++)
        {
            int inti = targetWord[i]-97;
            s3+= to_string(inti);
        }
        int sm = stoi(s1)+stoi(s2);
        return (sm == stoi(s3));
        
        
    }
};
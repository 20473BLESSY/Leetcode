class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string s1,s2,s3;
        
        for(int i=0;i<firstWord.size();i++)
        {
            int inti= firstWord[i]-'a';
            s1+= to_string(inti);
        }
        for(int i=0;i<secondWord.size();i++)
        {
            int inti= secondWord[i]-'a';
            s2  += to_string(inti);
        }
        for(int i=0;i<targetWord.size();i++)
        {
            int inti = targetWord[i]-'a';
            s3+= to_string(inti);
        }
        int sm = stoi(s1)+stoi(s2);
        return (sm == stoi(s3));
        
        
    }
};
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string t="";
        int index =0,f=0;
        for( auto i :sentence)
        {
            if(i != ' ')
            {
                t += i;
                if(t== searchWord)
                {
                   f=1;
                 break;
                }
            }
            else{
                index++;
                 t="";
            }
        }
        if(f==0)
            return -1;
        else
            return index+1;
    }
};
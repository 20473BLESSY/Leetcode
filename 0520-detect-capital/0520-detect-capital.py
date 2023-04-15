class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        k,k2,s,s2 =0,0,0,0
        if word[0] >='A' and word[0] <= 'Z':
            for i in range(1,len(word)):
                if word[i] >='A'and word[i] <= 'Z':
                    k+=1
                else:
                    k2 +=1
        else:
            for i in range(0,len(word)):
                if word[i] >='A'and word[i] <= 'Z':
                    s+=1
                else:
                    s2 +=1
        if s2 == len(word) or k==len(word)-1  or k2 == len(word)-1:
            return True
        else:
            return False
                    
            
        
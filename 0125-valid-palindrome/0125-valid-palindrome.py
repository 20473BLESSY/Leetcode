class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1 =""
        s=s.lower()
        for i in s:
            if i.isalpha() or i.isnumeric():
                s1 +=i
        if s1 == s1[::-1]:
            return True
        else:
            return False
            
            
                
        
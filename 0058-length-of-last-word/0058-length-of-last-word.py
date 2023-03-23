class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        p = list(map(str,s.split()))
        return len(p[-1])
            
        
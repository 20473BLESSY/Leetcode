class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dic = {}
        s2 = s.split(" ")
        if len(set(pattern)) != len(set(s2)):
            return False
        if len(pattern) != len(s2):
            return False
        for i in range(len(pattern)):
            if pattern[i] not in dic:
                dic[pattern[i]] = s2[i]
            elif dic[pattern[i]] != s2[i]:
                return False
        return True
        
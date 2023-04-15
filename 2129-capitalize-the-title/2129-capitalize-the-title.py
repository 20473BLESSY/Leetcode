class Solution:
    def capitalizeTitle(self, title: str) -> str:
        s=[]
        lis = list(map(str,title.split()))
        for i in lis:
            if len(i) >2 :
                i=i.capitalize()
                s.append(i)
            else:
                s.append(i.lower())
                
            
        return ' '.join(s)
        
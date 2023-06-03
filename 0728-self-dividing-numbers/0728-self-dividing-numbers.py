class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        lis =[]
        for num in range(left,right+1):
            c=0
            for j in str(num):
                if(int(j) !=0 and (int(num) % int(j) ==0)):
                    c+=1
            if(c==len(str(num))):
                lis.append(int(num))
        return lis
        
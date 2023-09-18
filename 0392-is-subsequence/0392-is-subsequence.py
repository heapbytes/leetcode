class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        
        flag = 0
        for i in s:
            for j in range(len(t)):
                if t[j] == i:
                    t = t[j+1:]
                    flag += 1
                    break
        
        
        if (flag == len(s)):
            return True
        else:
            return False
                
        
        
        
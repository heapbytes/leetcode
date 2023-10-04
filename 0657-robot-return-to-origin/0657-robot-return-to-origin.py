class Solution:
    def judgeCircle(self, moves: str) -> bool:
      
      dirVal = {
        "U":1,
        "R":200,
        "L":-200,
        "D":-1
      }
      
      ans = 0
      for i in moves:
        ans += dirVal.get(i)
        print(ans, end=' ')
     
      
      return ans == 0
        
        
        
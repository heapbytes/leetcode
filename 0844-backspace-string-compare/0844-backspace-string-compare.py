class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
      
      if s == t:
        return True
      
      a = []
      b = []
      
      for i in s:
        if i != '#':
          a.append(i)
        elif i == '#' and a:
          a.pop()
      
      
      for i in t:
        if i != '#':
          b.append(i)
        elif i == '#' and b:
          b.pop()
      
      return a == b
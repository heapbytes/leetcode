class Solution:
    def reverseWords(self, s: str) -> str:
      
      ans = s.split(' ')
      
      return ' '.join([i[::-1] for i in ans])
        
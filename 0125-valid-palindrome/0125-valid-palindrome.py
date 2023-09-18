
class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        ans = ''
        for i in s:
            if ord(i) in range(97, 123) or ord(i) in range(65, 91) or ord(i) in range(48, 58):
                ans += i
        
        ans = ans.lower()
        print(ans)
        if ans[::-1] == ans:
            return True
        else:
            return False
        
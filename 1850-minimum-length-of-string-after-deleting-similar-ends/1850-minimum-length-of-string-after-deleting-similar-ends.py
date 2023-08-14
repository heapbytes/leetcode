class Solution:
    def minimumLength(self, s: str) -> int:

        l, r = 0, len(s)-1

        while(l<r and s[l] == s[r]):

            nvm = s[l]

            while(l <=r and s[l] == nvm):
                l += 1

            while(l <= r and s[r] == nvm):
                r -= 1
            
        return r - l +1
    
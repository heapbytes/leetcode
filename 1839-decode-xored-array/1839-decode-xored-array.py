class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:

        ans= [first]

        for i in range(len(encoded)):
            ele = ans[-1] ^ encoded[i]
            ans.append(ele)
        
        return ans
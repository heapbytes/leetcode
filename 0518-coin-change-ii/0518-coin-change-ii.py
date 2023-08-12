class Solution:
    def change(self, amount: int, coins: List[int]) -> int:

        ans = [0] * (amount + 1)
        ans[0] = 1

        for i in coins:
            for j in range(i, amount+1):
                ans[j] += ans[j - i]
        
        return ans[amount]

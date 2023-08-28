class Solution:
    def canJump(self, nums: List[int]) -> bool:

        n = len(nums)
        jump = 0
        
        for i in range(n):
            if jump < i:
                return False
            jump = max(jump, i + nums[i])
        
        return True

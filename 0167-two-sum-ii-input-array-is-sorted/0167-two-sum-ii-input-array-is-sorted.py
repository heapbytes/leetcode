class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
      
      ans = [0] * 2
      left, right = 0, len(nums)-1
      
      while left < right:
        
        a = nums[left]
        b = nums[right]
        if a + b == target:
          return [left + 1, right + 1]
        
        if a + b > target:
          right -= 1
        else:
          left += 1
      
      return []
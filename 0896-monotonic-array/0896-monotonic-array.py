class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
      
      inc, dec = True, True
      tmp = nums[0]
      
      for i in nums[1:]:
        if i > tmp:
          dec = False
        if i < tmp:
          inc = False
        tmp = i
      
      return inc or dec
          
        
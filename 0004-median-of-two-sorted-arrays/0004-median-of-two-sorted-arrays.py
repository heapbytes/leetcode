class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        
        ans = nums1 + nums2
        ans.sort()
        ch = len(ans)
        
        if(ch % 2 == 0):    
            return (ans[(ch // 2) -1] + ans[(ch // 2)]) / 2
        else:
            return (ans[(ch // 2)])
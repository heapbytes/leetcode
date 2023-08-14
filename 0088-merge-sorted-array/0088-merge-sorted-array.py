class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        ch = m - 1
        ch1 = n - 1
        for i in range(len(nums1) - 1, -1, -1):
            if ch >= 0 and (ch1 < 0 or nums1[ch] > nums2[ch1]):
                nums1[i] = nums1[ch]
                ch -= 1
            else:
                nums1[i] = nums2[ch1]
                ch1 -= 1

"""
        for i in range(len(nums1)):
            if i >= m:
                nums1[i] = nums2[i - len(nums2)]
        nums1.sort()
"""
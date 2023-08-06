class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        ans = []
        potions.sort()

        for i in range(len(spells)):
            sup = 0
            l, r = 0, len(potions) -1;
            while(l <= r):
                mid = (l + r) //2
                if(potions[mid] * spells[i] >= success):
                    sup = len(potions) - mid
                    r = mid - 1
                else:
                    l = mid + 1
            ans.append(sup)

        return ans
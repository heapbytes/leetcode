class Solution:
    def calPoints(self, operations: List[str]) -> int:

        ans = []

        for i in operations:

            if i == '+':
                ans.append( ans[-1] + ans[-2] )
            if i == 'D':
                ans.append(2 * ans[-1])
            if i == 'C':
                ans.pop()
            try:
                if int(i):
                    ans.append(int(i))
            except:
                pass
        return sum(ans)

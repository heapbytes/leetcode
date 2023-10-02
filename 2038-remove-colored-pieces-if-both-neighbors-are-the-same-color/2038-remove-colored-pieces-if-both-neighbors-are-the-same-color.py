class Solution:
    def winnerOfGame(self, colors: str) -> bool:
        n = len(colors)
        _A, _B = 0, 0

        for i in range(1, n - 1):
            if colors[i] == 'A':
                if colors[i - 1] == 'A' and colors[i + 1] == 'A':
                    _A += 1
            elif colors[i] == 'B':
                if colors[i - 1] == 'B' and colors[i + 1] == 'B':
                    _B += 1

        return True if _A > _B else False

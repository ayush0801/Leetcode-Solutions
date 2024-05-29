class Solution:
    def numSteps(self, s: str) -> int:
        res = 0
        num = int(s,2)
        while num != 1:
            if num % 2 == 0:
                num = num // 2
            else:
                num = num + 1
            res +=1

        return res
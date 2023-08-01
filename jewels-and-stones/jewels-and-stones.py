class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        check = set(jewels)
        ans = 0
        for letter in stones:
            if letter in check:
                ans += 1
        return ans
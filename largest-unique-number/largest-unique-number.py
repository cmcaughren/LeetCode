from collections import defaultdict
class Solution:
    def largestUniqueNumber(self, nums: List[int]) -> int:
        counts = defaultdict(int)
        ans = -1
        for num in nums:
            counts[num] += 1

        for key, value in counts.items():
            if value == 1:                
                ans = max(key, ans)
                
        return ans
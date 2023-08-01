from collections import defaultdict
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dic = defaultdict(int)
        ans = left = 0
        for right in range(len(s)):
            dic[s[right]] += 1
            while dic[s[right]] > 1:
                dic[s[left]] -= 1
                left += 1
            ans = max(ans, right - left + 1)
        return ans
from collections import defaultdict
class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        word = "balloon"
        counts = defaultdict(int)
        
        for letter in text:
            if letter in word:
                counts[letter] += 1
        
        k = min(counts["b"], counts["a"], counts["n"])
        q = min(counts["l"], counts["o"])
        if q >= k*2:
            return k
        else:
            return q//2
        
        return 0
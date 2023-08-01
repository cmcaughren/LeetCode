from collections import defaultdict
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        note = defaultdict(int)
        mag = defaultdict(int)
        for letter in ransomNote:
            note[letter] += 1
        for letter in magazine:
            mag[letter] += 1
        for key, value in note.items():
            if mag[key] < value:
                return False
        return True
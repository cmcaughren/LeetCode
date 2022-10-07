class Solution:
    def reverseWords(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        lenS = len(s) - 1
        #reverse the entire string
        self.reverse(s, 0, lenS)
        
        beg = 0
        #reverse the letters in each word of the string
        for i in range(len(s)):
            if s[i] == " ":
                self.reverse(s, beg, i - 1)
                beg = i + 1
            elif i == lenS:
                self.reverse(s, beg, lenS)
                
        
        
        
        
    def reverse(self, s: List[str], start, end):
        while start < end:
            s[start], s[end] = s[end], s[start]
            start = start + 1
            end = end - 1
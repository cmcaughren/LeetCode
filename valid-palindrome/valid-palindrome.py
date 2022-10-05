class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        #tolower s
        s = s.lower()
        
        #cycle through each letter in s and remove all letters not alphanumeric
        new_s = ""
        for l in s:
            if l.isalnum():
                new_s = new_s + l 
        s = new_s
        end = len(s) - 1
        for index, l in enumerate(s):
            if index >= (end - index):
                break #we have checked all values, met in center 
            if s[index] != s[end - index]:
                return False
        
        return True
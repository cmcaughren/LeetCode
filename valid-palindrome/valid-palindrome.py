class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        #tolower s
        s = s.lower()
        
        #cycle through each letter in s and remove all letters not alphanumeric
        for l in s:
            if not l.isalnum():
                #replaces all instances of character l in s with "", not just those in the current position 
                s = s.replace(l, "")
        
        end = len(s) - 1
        for index, l in enumerate(s):
            if index >= (end - index):
                break #we have checked all values, met in center 
            if s[index] != s[end - index]:
                return False
        
        return True
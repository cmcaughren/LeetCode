class Solution:
    def makeGood(self, s: str) -> str:
        good = []
        
        for c in s:
            if len(good) == 0:
                good.append(c)
            elif c.isupper() and good[-1].islower():
                d = good[-1].upper()
                if c == d:
                    good.pop()
                else:
                    good.append(c)
            elif c.islower() and good[-1].isupper():
                d = good[-1].lower()
                if c == d:    
                    good.pop()
                else:
                    good.append(c)
            else: 
                good.append(c)
        return "".join(good)
            
                
            
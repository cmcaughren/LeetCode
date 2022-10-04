class Solution:
    def isValid(self, s: str) -> bool:
        #nesting of brackets is allowed 
        #use a stack
        #string will be length 1 and greater
        stack = []     
        for bracket in s:
            
            if (bracket == "{") or (bracket == "(") or (bracket == "["):
                stack.append(bracket)
            else: #bracket is either }, ), or ]

                if len(stack) == 0:
                    return False
                
                i = stack.pop()
                if i == "{":
                    if bracket is not "}":
                        return False
                elif i == "(":
                    if bracket is not ")":
                        return False
                elif i == "[":
                    if bracket is not "]":
                        return False
                #we have a matching bracket set

        if len(stack) != 0:
            return False
        else: 
            return True       
                    
                
            
            
            
            
            
            
        
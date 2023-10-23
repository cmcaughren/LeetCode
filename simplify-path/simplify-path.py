class Solution:
    def simplifyPath(self, path: str) -> str:
        canpath = []
        
        #deliminate path by "/"
        deliminated_path = path.split("/")
        print(deliminated_path)
        for word in deliminated_path:
            #.. go "up" level, pop canpath if possible reach next "/" (unless reach root, then return "/")
            if word == '..':
                if len(canpath) >= 1:
                    canpath.pop()
            #/ follows a / then ignore it, "." ignore it and the / following it, 
            elif word != "" and word != ".":
                canpath.append(word)
        canpath = "/".join(canpath)
        canpath = "/" + canpath
        return canpath
            
            
            
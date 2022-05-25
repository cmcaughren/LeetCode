class Solution {
public:
    bool isValid(string s) {
        
        stack<int> stk;
        char popped;
        int len = s.length();
        for (int i = 0; i < len; i++){
            
            char c = s[i];
            switch(c) {
                case '(': 
                    stk.push(c);
                    break;
                    
                case '{':
                    stk.push(c);
                    break;
                    
                case '[':
                    stk.push(c);
                    break;
                    
                case ')':
                    if (stk.empty()) return false;
                    popped = stk.top();
                    if (popped != '(') {
                        return false;
                    }
                    stk.pop();
                    break;
                    
                case '}':
                    if (stk.empty()) return false;
                    popped = stk.top();
                    if (popped != '{') {
                        return false;
                    }
                    stk.pop();
                    break;
                    
                case ']':
                    if (stk.empty()) return false;
                    popped = stk.top();
                    if (popped != '[') {
                        return false;
                    }
                    stk.pop();
                    break;
                    
                default : 
                    return false;
                   
           }
        }
        if (stk.empty()){
            return true;
        }
        return false;
            
        
        
        
    }
};
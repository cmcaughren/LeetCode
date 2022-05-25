class Solution {
public:
    bool isValid(string s) {
        
        stack<int> stk;
        char popped;
        int len = s.length();
        
        if (len == 0) {
            return true;
        }
        else if (len%2 != 0) {
            return false;
        }


        for (int i = 0; i < len; i++){
            
            char c = s[i];
            switch(c) {
                case '(': 
                case '{':    
                case '[':    
                    stk.push(c);
                    break;
                case ')':
                    if (stk.empty() || (stk.top() != '(')) return false;
                    stk.pop();
                    break;
                    
                case '}':
                    if (stk.empty()  || (stk.top() != '{')) return false;
                    stk.pop();
                    break;
                    
                case ']':
                    if (stk.empty()  || (stk.top() != '[')) return false;
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
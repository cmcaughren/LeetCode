class Solution {
public:
    void reverseString(vector<char>& s) {
        
        char c;
        int len = s.size();
        
        int j = len - 1;
             
        for (int i = 0; i < (len/2); i++) {
                         
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            j--;                
            
        }
       
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 1) {
            return true;
        }
             
        for (int n = 0; n < s.length(); n++){
            if (isalnum(s[n]) == 0) {
                s.erase(s.begin()+n);
                n--;
            }
        }
        
        int i = 0;
        int j = (s.length() - 1);
        
        while (i < j) {
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if (s[i] != s[j]){
                return false;
            }
            
            i++;
            j--;            
        }
        
        return true;
    }
};
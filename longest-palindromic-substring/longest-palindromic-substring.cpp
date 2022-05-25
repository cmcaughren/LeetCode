class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        
        string palindrome = "";
        int pal_len = 0;
        
        for (int i = 0; i< len; i++){
            
            for (int j = (len - 1); j >= i; j--){
                int iter_i = i;
                int iter_j = j;
                if (s[j] == s[i]){
                    while (iter_i < iter_j){
                        if (s[iter_i] == s[iter_j]){
                            iter_i++;
                            iter_j--;
                        }
                        else {
                            break;
                        }
                    }
                    if (s[iter_i] == s[iter_j]){
                        

                        string temp = s.substr(i,(j - i + 1));
                        int temp_len = temp.length();
                        if (temp_len > pal_len){
                            palindrome = temp;
                            pal_len = temp_len;
                        }
                        break; //finished incrementing j for this i, break to increment to next i 
                    }
                    
                    
                }
                               
            }
            
        }
        return palindrome;
    }
};
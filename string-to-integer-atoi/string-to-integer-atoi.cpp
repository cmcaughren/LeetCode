class Solution {
public:
    int myAtoi(string s) {
        
        int i = 0;
        long answer = 0;
        int sign = 1;
        while ( (s[i] == ' ') && (s[i] != '\n') ) {
            i++;
        }
        
        if (s[i] == '-') { 
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }
            
        while (isdigit(s[i]) && (s[i] != '\n')){ 
            
            answer = (answer*10) + (s[i] - '0');
            //cout << answer << endl;
            i++;
            
            if (answer*sign < (pow(2,31) / -1) ) {
                return (pow(2, 31) / -1);
            }
            else if (answer*sign > (pow(2, 31) -1 )) {
                return (pow(2, 31) - 1);
            } 
        }
        answer = answer*sign;
        return int(answer);
    }
};
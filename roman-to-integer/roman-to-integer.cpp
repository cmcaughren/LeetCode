class Solution {
public:
    int romanToInt(string s) {
        
        int sum = 0;
        int i = 0; 
        
        while ( i < s.length() ) {
            
            char current_letter = s[i];
            switch(current_letter) {
                case 'I' : 
                    if (s[i + 1] == 'V'){
                        sum = sum + 4;
                        i = i + 2;
                    }
                    else if (s[i + 1] == 'X'){
                        sum = sum + 9;
                        i = i + 2;
                    }
                    else {
                        sum = sum + 1; 
                        i++;
                    }
                    break;
                case 'V' : 
                    sum = sum + 5;
                    i++;
                    break;
                case 'X' :
                    if (s[i + 1] == 'L'){
                        sum = sum + 40;
                        i = i + 2;
                    }
                    else if (s[i + 1] == 'C'){
                        sum = sum + 90;
                        i = i + 2;
                    }
                    else {
                        sum = sum + 10;
                        i++;
                    }
                    break;
                case 'L' :
                    sum = sum + 50;
                    i++;
                    break;
                case 'C' :
                    if (s[i + 1] == 'D'){
                        sum = sum + 400;
                        i = i + 2;
                    }
                    else if (s[i + 1] == 'M'){
                        sum = sum + 900;
                        i = i + 2;
                    }
                    else {
                        sum = sum + 100;
                        i++;
                    }
                    break;
                case 'D' :
                    sum = sum + 500;
                    i++;
                    break;
                case 'M' :
                    sum = sum + 1000;
                    i++;
                    break;
                default :
                    cout << "This string is invalid";
                    return -1;
                    
             }
        }
        return sum;
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; //negative number, not palindrome
        if (x < 10) return true; //single digit, palindrome

        int n = x;
        int count = 0;
        
        //find the number of digits of x
        while (n != 0){
            n = n/10;
            count ++;
        }
        
        n = x;
        int array[count];
        bool palindrome = true;
        
        for (int i = (count - 1); i >= 0; i--){
            array[i] = n%10;
            n = n/10;
        }
        for (int i = 0; i < (count/2); i++){
        
            if (array[i] != array[(count -1 -i)]){
                palindrome = false;
            }
        }
        return palindrome;
    }
};


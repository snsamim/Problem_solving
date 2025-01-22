class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;

        int copyX = x;
        long result= 0;
        while (x > 0){
            result = (result*10) + ( x % 10);
            x/=10;
        }

        return copyX == result;
        
    }
};
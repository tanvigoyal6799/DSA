class Solution {
public:
//tanvigoyall
    bool isPalindrome(int x) {
        int i=x;
        long long palindrome=0;
        int result;
        if(x<0){
            return false;
        }
        while(x>0)
        {
            result=x%10;
            palindrome= palindrome*10+result;
            x=x/10;
            
        }
        if(palindrome==i)
        {
            return true;
        }
        return false;
    }
};
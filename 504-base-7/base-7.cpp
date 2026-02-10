class Solution {
public:
    string convertToBase7(int num) {
        // Special case
        if (num == 0) return "0";
        
        bool negative = num < 0;
        num = abs(num);
        
        string result = "";
        
        // Convert to base 7
        while (num > 0) {
            result = char('0' + (num % 7)) + result;
            num /= 7;
        }
        
        // Add sign if negative
        if (negative) result = "-" + result;
        
        return result;
    }
};

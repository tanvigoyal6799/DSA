class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int bits = __builtin_popcount(num2);
        int x = 0;

       
        for (int i = 31; i >= 0 && bits > 0; i--) {
            if (num1 & (1 << i)) {
                x |= (1 << i);
                bits--;
            }
        }

       
        for (int i = 0; i <= 31 && bits > 0; i++) {
            if ((x & (1 << i)) == 0) {
                x |= (1 << i);
                bits--;
            }
        }

        return x;
    }
};
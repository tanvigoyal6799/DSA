class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // vector<int> result;
        //  unsigned long long a=0;
        // int n = digits.size();
        // for(int i=0;i<n;i++)
        // {
        //     a=a*10 + digits[i];

        // }
        // a=a+1;
        // while(a>0)
        // {
        //     int p=a%10;
        //     result.push_back(p);
        //     a=a/10;
        // }
        // reverse(result.begin(), result.end());

        // return result;


        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;  // carry forward
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
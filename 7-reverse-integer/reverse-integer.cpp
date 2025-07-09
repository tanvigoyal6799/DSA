class Solution {
public:
//tanvigoyal
    int reverse(int x) {
        int a;
        int long long sum=0;
        while(x>0||x<0)
        {
            a=x%10;
            sum=sum*10+a;
            if (sum > INT_MAX || sum < INT_MIN) {
                return 0;  
            }
            x=x/10;
           
        }
        return sum;
   }
};
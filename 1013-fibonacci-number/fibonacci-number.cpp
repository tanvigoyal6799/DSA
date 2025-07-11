class Solution {
public:
//tanvigoyall
    int series(int n){
        if(n==0)return 0;
        if(n==1)return 1;
        return series(n-1)+series(n-2);
    }
    int fib(int n) {
     return  series(n);   
    }
};

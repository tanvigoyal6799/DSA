class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0) return false;
        int result=0;
       
            for(int i=1;i<num;i++)
            {
              if(num%i==0)
              {
                result=result+i;
              }
            }
        
        if(result==num) return true;

        return false;
    }
};
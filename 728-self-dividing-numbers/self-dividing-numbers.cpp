class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
       for(int i=left;i<=right;i++)
       {
        int num=i;
        bool der = true;
        while(num>0)
        {
            int ans=num%10;
            if(ans==0 or i%ans!=0)
           { der=false;
            break;

        }
        num=num/10;
       }
       if (der)
       result.push_back(i);
       }
       return result;
    }
};
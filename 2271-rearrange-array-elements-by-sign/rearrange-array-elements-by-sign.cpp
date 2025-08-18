class Solution {
public:

    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> result(n);
        int pos=0,neg=1;      
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                result[pos]=nums[i];
                pos+=2;
            }
            else{            
                result[neg]=nums[i];
                neg+=2;
            }
        }
        return result;







    //     int left=0;
    //     int n=nums.size();
    //     vector<int> pos, neg;

    
    // for (int x : nums) {
    //     if (x >= 0) pos.push_back(x);
    //     else neg.push_back(x);
    // }

    // int i = 0, j = 0, k = 0;

    
    // while (i < pos.size() && j < neg.size()) {
    //     nums[k++] = pos[i++];
    //     nums[k++] = neg[j++];
    // }

    


    // return nums;
    }   
};
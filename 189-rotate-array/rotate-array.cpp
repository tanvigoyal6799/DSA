class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result;
        int n= nums.size();
        k = k % n;
        int remaining= n-k;
       
        for(int i=remaining;i<n;i++)
        {
            result.push_back(nums[i]);
        }

         for(int i=0;i<remaining;i++)
        {
            result.push_back(nums[i]);
        }
        nums=result;
    }
    
};
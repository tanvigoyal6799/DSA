class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low=0, high=nums.size()-1;
       for(int i=0;i<=high;i++)
       {
        if(nums[i] !=0)
        {
            swap(nums[i],nums[low]);
            low++;
        }
       }
        
    }
};

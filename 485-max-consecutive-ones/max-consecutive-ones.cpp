class Solution {
public:
//tanvigoyall
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxc=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxc=max(maxc,count);

            }
            else count=0;
        }
        return maxc;
    }
};
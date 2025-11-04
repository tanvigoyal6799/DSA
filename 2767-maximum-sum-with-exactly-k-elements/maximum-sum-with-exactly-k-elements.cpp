class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int Max=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if (nums[i] > Max)
            Max = nums[i];
        }
        int sum = 0;
        for (int i = 0; i < k; i++) {
             sum = sum + Max;
             Max++; 
         }
         return sum;
    }
};
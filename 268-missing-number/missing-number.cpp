class Solution {
public:
//tanvigoyall
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int sumarray=0;
        for(int value: nums)
        {
            sumarray=sumarray+value;
        }
    
    return (sum-sumarray);
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            if(nums[i]==nums[j])
            {
                result.push_back(nums[i]);
                break;
            } 
            }

           
        }
        int sum=0;
        for(int i:nums)
        {
            sum=sum+i;
        }
        int total=(n*(n+1))/2;
        for(int i:result)
        {
            sum=sum-i;
        }
        int ans = total-sum;
        result.push_back(ans);
        
        
        return result;
    }
};
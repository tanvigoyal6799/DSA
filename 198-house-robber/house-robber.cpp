class Solution {
public:
    int rob(vector<int>& nums) {
    //    int  n=nums.size();
    //     vector<int> dp(n+1);
    //     for(int i=2;i<n;2*i)
    //     {
    //         dp[i]=dp[i]+dp[i-2];
    //     }
    //     return dp[n];

      int prev1 = 0;
        int prev2 = 0;

        for (int money : nums) {
            int curr = max(prev1, prev2 + money);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
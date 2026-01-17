class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
        
        // Flip negative numbers first
        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }
        
        // If k is odd, flip the smallest element
        if (k % 2 == 1) {
            int mn = *min_element(nums.begin(), nums.end());
            int idx = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[idx] = -nums[idx];
        }
        
        // Calculate sum
        int sum = 0;
        for (int x : nums) sum += x;
        return sum; 
    }
};
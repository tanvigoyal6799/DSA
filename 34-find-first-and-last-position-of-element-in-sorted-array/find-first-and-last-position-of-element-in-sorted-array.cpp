class Solution {
public:
int firstOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;   
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return ans;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1;    
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return ans;
    }
     vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOccurrence(nums, target),
                lastOccurrence(nums, target)};
    // vector<int> searchRange(vector<int>& nums, int target) {
        //    int left = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        // int right = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        // if (left == nums.size() || nums[left] != target)
        //     return {-1, -1};

        // return {left, right};
    }
};
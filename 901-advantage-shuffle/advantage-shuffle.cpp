class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        
        sort(nums1.begin(), nums1.end());
        
        vector<int> idx(n);
        for (int i = 0; i < n; i++)
            idx[i] = i;

        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return nums2[a] < nums2[b];
        });

        vector<int> ans(n);
        int left = 0, right = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            int j = idx[i];
            if (nums1[right] > nums2[j]) {
                ans[j] = nums1[right];
                right--;
            } else {
                ans[j] = nums1[left];
                left++;
            }
        }

        return ans;
    }
};
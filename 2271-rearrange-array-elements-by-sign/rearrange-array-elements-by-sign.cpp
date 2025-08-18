class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int left=0;
        int n=nums.size();
        vector<int> pos, neg;

    
    for (int x : nums) {
        if (x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }

    int i = 0, j = 0, k = 0;

    
    while (i < pos.size() && j < neg.size()) {
        nums[k++] = pos[i++];
        nums[k++] = neg[j++];
    }

    


    return nums;
    }   
};
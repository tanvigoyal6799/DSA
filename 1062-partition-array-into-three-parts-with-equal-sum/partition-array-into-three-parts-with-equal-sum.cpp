class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
       
        int total = 0;
        for (int x : arr) total += x;

        if (total % 3 != 0) return false;

        int target = total / 3;
        int curr = 0, cnt = 0;

        for (int i = 0; i < arr.size(); i++) {
            curr += arr[i];
            if (curr == target) {
                cnt++;
                curr = 0;
            }
        }
        return cnt >= 3;
    }
};
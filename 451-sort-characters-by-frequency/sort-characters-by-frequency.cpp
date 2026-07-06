class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char, int> freq;

        // Count frequency
        for (char c : s)
            freq[c]++;

        // Bucket where index = frequency
        vector<vector<char>> bucket(s.size() + 1);

        for (auto it : freq)
            bucket[it.second].push_back(it.first);

        string ans = "";

        // Traverse from highest frequency
        for (int i = s.size(); i >= 1; i--) {
            for (char c : bucket[i]) {
                ans.append(i, c);
            }
        }

        return ans;
    }
};
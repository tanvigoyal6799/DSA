class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";

        // Extract words
        for(char c : s) {
            if(c != ' ') {
                temp += c;
            } 
            else {
                if(!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
                }
            }
        }

        if(!temp.empty())
            words.push_back(temp);

        // Build answer in reverse order
        string ans = "";

        for(int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];
            if(i != 0)
                ans += " ";
        }

        return ans;
    
    }
};
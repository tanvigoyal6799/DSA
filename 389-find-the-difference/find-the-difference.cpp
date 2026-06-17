class Solution {
public:
    char findTheDifference(string s, string t) {
        // xor 
        int ans=0;
        for(char c : s)
        {
            ans^=c;
        }
        for(char c: t)
        {
            ans^=c;
        }
        return ans;


        // using hash

        unordered_map<int, char> result;
        for(char c: s)
        {
            result[c]++;
        }

        for(char c: t)
        {
            result[c]--;
            if(result[c]<0)
            {
                return c;
            }
            return ' ';
        }
        
    }
};
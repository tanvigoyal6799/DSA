class Solution {
public:
//tanvigoyall
    void string(vector<char>& s, int left, int right) {
        if (left >= right) return;
        swap(s[left], s[right]);
        string(s, left + 1, right - 1);
    }


    void reverseString(vector<char>& s) {
        string(s, 0, s.size() - 1);
    }
    
};
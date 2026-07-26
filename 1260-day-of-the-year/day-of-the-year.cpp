class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};

        int ans = day;

        for (int i = 0; i < month - 1; i++) {
            ans += days[i];
        }

        // Leap year check
        if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month > 2) {
            ans++;
        }

        return ans;
    }
};
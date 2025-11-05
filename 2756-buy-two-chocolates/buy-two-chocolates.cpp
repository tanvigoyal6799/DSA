class Solution {
public:
//tanvigoyall
    int buyChoco(vector<int>& prices, int money) {
         int first = INT_MAX, second = INT_MAX;

    
    for (int p : prices) {
        if (p < first) {
            second = first;
            first = p;
        } else if (p < second) {
            second = p;
        }
    }
    int cost = first + second;

    if (cost > money) return money;  
    return money - cost;     
    }
};
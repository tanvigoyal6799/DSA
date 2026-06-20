class Solution {
public:
    int romanToInt(string s) {
        int T1=0,T2=0,T3=0,T4=0,T5=0,T6=0,T7=0,TOTAL=0;
    for(int i=0;i<s.length();i++){
        int value1=0;
        int value2=0;
        if(s[i]=='I'){
            value1=1;
        }
        else if(s[i]=='V'){
            value1=5;
        }
        else if(s[i]=='X') {
            value1=10;
        }
        else if(s[i]=='L') {
            value1=50;
        }
        else if(s[i]=='C') {
            value1=100;
        }
        else if(s[i]=='D') {
            value1=500;
        }
        else if(s[i]=='M') {
            value1=1000;
        }
        if(i+1<s.length()) {
            if(s[i+1]=='I'){
                value2=1;
            }
            else if(s[i+1]=='V') {
                value2=5;
            }
            else if(s[i+1]=='X'){
                value2=10;
            }
            else if(s[i+1]=='L') {
                value2=50;
            }
            else if(s[i+1]=='C') {
                value2=100;
            }
            else if(s[i+1]=='D') {
                value2=500;
            }
            else if(s[i+1]=='M') {
                value2=1000;
            }
        }
        if(value2>value1) {
            TOTAL=TOTAL-value1;
        }
        else {
            TOTAL=TOTAL+value1; 
        }
    }
    return TOTAL;  
    }
};
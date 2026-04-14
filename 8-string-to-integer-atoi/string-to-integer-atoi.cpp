class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        int ans = 0;
        
        // skip spaces
        while (i < n && s[i] == ' ') i++;
        
        // sign handling
        int sign = 1;
        if (i < n && s[i] == '+') {
            i++;
        }
        else if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        } 
        
        // read digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            
            int digit = s[i] - '0';
            
            // overflow check
            if (ans > (INT_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            ans = ans * 10 + digit;
            i++;
        }
        
        return sign * ans;
    }
};
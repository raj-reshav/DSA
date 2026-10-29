class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int i=0;
        int n=s.length();

        while(i<n && s[i]==' '){
            i++;
        }

        int sign=1;

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        while(i<n && s[i]<='9'&& s[i]>='0'){
            int digit=s[i]-'0';
            ans=ans*10+digit;

            if(sign * ans>INT_MAX){
                return INT_MAX;
            }

            if (sign * ans < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }

        return sign*ans;
    }
};
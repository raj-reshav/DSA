class Solution {
public:
    int maxDepth(string s) {
        int count=0,max=0;
        string ans="";

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){count++;}
            if(s[i]==')'){count--;}

            if(count>max){max=count;}
        }

        return max;
    }
};
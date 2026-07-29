class Solution {
public:
    string removeOuterParentheses(string s) {
        int lvl=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if (lvl > 0) ans =ans + s[i];
               
                lvl++;  
            }
            else if (s[i] == ')') {
                
                lvl--;  
               
                if (lvl > 0) ans =ans + s[i];
            }
            
        }
        return ans;
    }
};
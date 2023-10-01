class Solution {
public:
    string reverseWords(string s) {
     string ans="";
     string cur;
        for(int i=0; i<s.size(); i++)
        {   if(s[i]!=' ')cur+=s[i];
            if(s[i]==' '||i==s.size()-1)
            {   
                reverse(cur.begin(),cur.end());
                ans+=(ans.size()==0)?cur:" "+cur;
                cur="";
                
            }
         }
        return ans;
    }
};
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>ss;
        string t="";
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ')
            {
                ss.push_back(t);
                t="";
            }
            else t+=s[i];
        }ss.push_back(t);
        
        if(pattern.size()!=ss.size())return false;
        
        map<string,char>mp1;
        map<char,string>mp2;
        for(int i=0; i<ss.size(); i++)
        {
            if(mp1.find(ss[i])==mp1.end() && mp2.find(pattern[i])==mp2.end())
            {
                mp1[ss[i]]=pattern[i];
                mp2[pattern[i]]=ss[i];
            }
            else if(mp1[ss[i]]!=pattern[i] || mp2[pattern[i]]!=ss[i])
            {
                return false;
            }
        }return true;
    }
};
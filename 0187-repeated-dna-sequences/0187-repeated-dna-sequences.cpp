class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>mp;
        map<string,int>taken;
        vector<string>ans;
        string subString="";
        for(int i=0; i<s.size(); i++)
        {
            if(i+9<s.size())
            {
                subString=s.substr(i,10);
                if(mp[subString]!=0&&taken[subString]==0)
                {
                    ans.push_back(subString);
                    taken[subString]++;
                }
                mp[subString]++;
            }else break;
        }
        return ans;
    }
};
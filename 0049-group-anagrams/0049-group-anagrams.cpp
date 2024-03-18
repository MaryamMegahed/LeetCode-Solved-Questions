class Solution {
public:
      string signature(string s)
      {   
          vector<int>count(26,0);
          for(int i=0; i<s.size(); i++)
          {
              count[s[i]-'a']++;
          }
          stringstream ss;
          for(int i=0; i<26; i++)
          {
              if(count[i]!=0)
              {
                  ss<<char(i+'a')<<count[i];
              }
          }
          return ss.str();
      }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0; i<strs.size(); i++)
        {   
            mp[signature(strs[i])].push_back(strs[i]);
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            ans.push_back(it->second);
        }
            return ans;
            
    }
};
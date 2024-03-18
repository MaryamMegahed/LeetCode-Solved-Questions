class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<int>taken(strs.size(),0);
        //make a taken array 
        //loop in array , check if taken in group or not
        // if not taken-> build a group->put this index in it ->map ->iterate 

        vector<vector<string>>ans;
        for(int i=0; i<strs.size(); i++)
        {
            if(taken[i])
            {   
                continue;
            }
            unordered_map<char,int>mp,copy;
            for(int j=0; j<strs[i].size(); j++)
            {
                mp[strs[i][j]]++;
            }
            vector<string>group;
            group.push_back(strs[i]);
            for(int j=i+1; j<strs.size(); j++)
            {   
                if(taken[j]||strs[j].size()!=strs[i].size()) continue;
                copy=mp;
                bool match=true;
                for(int k=0; k<strs[j].size(); k++)
                {
                    if(copy[strs[j][k]]) 
                    {
                        copy[strs[j][k]]--;
                    }else 
                    { match=false;
                        break;
                    }
                }
                if(match) {group.push_back(strs[j]);
                           taken[j]=1;               }
            }
            if(group.size())
            {ans.push_back(group);
            }
        }
        return ans;
    }
};
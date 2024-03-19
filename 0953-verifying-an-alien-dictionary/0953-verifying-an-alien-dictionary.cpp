class Solution {
public:
    unordered_map<char,int>charOrder;
    bool checkSmaller(string s,string t)
    {
        int ss=s.size(), tt=t.size(),c=0;
        while(c<ss&&c<tt)
        {
            if(charOrder[s[c]]==charOrder[t[c]])
            {   c++;
                continue;
            }
            else if(charOrder[s[c]]<charOrder[t[c]])
                return true;
            else return false;
        
        }
        if(ss<=tt)return true;
        else return false;
        
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0; i<order.size(); i++)
        {
            charOrder[order[i]]=i;
        }
     for(int i=0; i<words.size()-1; i++)
     {
         if(checkSmaller(words[i],words[i+1])) continue;
         else return false;
     }
        return true;
    }
};
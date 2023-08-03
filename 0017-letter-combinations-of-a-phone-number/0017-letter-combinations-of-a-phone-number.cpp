class Solution {
public:
    vector<string>res;
    vector<char>cur;
    void create(string digits,unordered_map<int,string>&mp,vector<char>&cur,int i)
    {
        //base case
        if(i==digits.size())
        {   string ans="";
            for(int j=0; j<cur.size(); j++)
            {
                ans+=cur[j];
            }
            res.push_back(ans);
            return ;
        }
        for(auto ch:mp[digits[i]-'0'])
        {
            cur.push_back(ch);
            create(digits,mp,cur,i+1);
            cur.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return res;
        unordered_map<int,string>mp;
        char a='a';
        for(int i=2; i<=9; i++)
        {   
            if(i==7||i==9)
            {
                for(int j=0; j<4; j++)
                {
                    mp[i]+=a;
                    a++;
                }
                
            }else {
            for(int j=0; j<3; j++)
            {mp[i]+=a;
             a++;
            }
            }
        }
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            cout<<i->first<<"  "<<i->second<<endl;
        }
        create(digits,mp,cur,0);
        return res;
    }
};
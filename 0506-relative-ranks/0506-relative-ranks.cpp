class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>pq;
        map<int,int>mp;
        int gold=0,bronze=0,silver=0;
        vector<string>ans;
        for(int i=0; i<score.size(); i++)
        {
            pq.push(score[i]);
       }
        int i=1;
        while(i<=score.size())
        {   
          mp[pq.top()]=i;
          pq.pop();
            i++;
        }
         for(int i=0; i<score.size(); i++)
         {
             if(mp[score[i]]==1)
             {
                 ans.push_back("Gold Medal");
             }else if(mp[score[i]]==2)
             {
                 ans.push_back("Silver Medal");
             }else if(mp[score[i]]==3)
             {
                 ans.push_back("Bronze Medal");
             }
             else 
             { 
                 string a = to_string(mp[score[i]]);
                 ans.push_back(a);
             }
         }return ans;
    }
};
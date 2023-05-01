class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxx=-1,point1=0,count;
        for(int i=0; i<s.size(); i++)
        {
         vector<int>vis(130,0);
            count=0;
         for(int j=i; j<s.size(); j++)
         {
             if(vis[s[j]])
             {
                 break;
             }else 
             {
                 vis[s[j]]++;
                 count++;
                 maxx=max(maxx,count);
             }
         }
        }
        return maxx>=0?maxx:0;
    }
};
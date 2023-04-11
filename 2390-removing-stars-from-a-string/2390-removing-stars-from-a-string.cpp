class Solution {
public:
    string removeStars(string s) {
        int num_of_stars=0;
        string ans="";
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]!='*' && num_of_stars==0)
            {
                ans+=s[i];
            }
            else if(s[i]=='*')
            {
                num_of_stars++;
            }
            else if(num_of_stars)
            {
                num_of_stars--;
            }
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
 
};
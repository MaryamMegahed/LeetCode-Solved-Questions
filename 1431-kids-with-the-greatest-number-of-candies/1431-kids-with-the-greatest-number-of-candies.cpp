class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=-1,n=candies.size();
        vector<bool>ans(n,false);
        for(int i=0; i<n; i++)
        {
            maxx=max(maxx,candies[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(extraCandies+candies[i]>=maxx)
            {
                ans[i]=true;
            }
        }
        return ans;
    }
};
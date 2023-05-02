class Solution {
public:
    int singleNumber(vector<int>& nums) {
        const int n=2*30010;
        int m=nums.size();
        vector<int>vis(n,0);
        int ans=0;
        for(int i=0; i<m; i++)
        {
            vis[nums[i]+30005]++;
        }
          
        for(int i=0; i<m; i++)
        {
            if(vis[nums[i]+30005]==1)
            {
               ans=nums[i];
                break;
            }
        }
        return ans;
    }
};
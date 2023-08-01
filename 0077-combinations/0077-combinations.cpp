class Solution {
public:
    vector<int> one_combination;
    vector<vector<int>> ans;
    void create(int n,int k,int start , vector<int>&one_combination,vector<vector<int>>& ans)
    {
        if(one_combination.size()==k)
        {
            ans.push_back(one_combination);
            return;
         }
        for(int i=start; i<=n; i++)
        {
            one_combination.push_back(i);
            create(n,k,i+1,one_combination,ans);
            one_combination.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
       create(n,k,1,one_combination,ans);
        return ans;
    }
    
};
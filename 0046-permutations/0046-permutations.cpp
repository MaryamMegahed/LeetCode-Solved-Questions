class Solution {
public:
    vector<int> one_Permutations;
    vector<vector<int>> ans;
    void create(int n,vector<int>& nums, vector<int>&one_Permutations,vector<vector<int>>& ans)
    {
        if(one_Permutations.size()==n)
        {
            ans.push_back(one_Permutations);
            return;
         }
        for(int i=0; i<n; i++)
        {   
         if (find(one_Permutations.begin(), one_Permutations.end(), nums[i]) == one_Permutations.end()) {
            one_Permutations.push_back(nums[i]);
            create(n,nums,one_Permutations,ans);
            one_Permutations.pop_back();
         }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
       create(n,nums,one_Permutations,ans);
        return ans;
    }
};
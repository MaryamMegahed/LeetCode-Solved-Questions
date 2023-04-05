class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long total=nums[0],avg,ans=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            total+=nums[i];
            avg=ceil(total/(i+1.0));
            ans=max(ans,avg);
        }
        return ans;
    }
};
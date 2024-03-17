class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int reminder;
        bool found=false;
        for(int i=0; i<nums.size(); i++)
        {  
            reminder=target-nums[i];
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j]==reminder)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    found=true;
                    break;
                }
            }
            if(found)break;
        }
        return ans;
    }
};
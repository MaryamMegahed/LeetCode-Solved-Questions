class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<=nums.size(); i++)
        {   
            if(i==nums.size()-1&&i==nums[i]) return i+1;
            if(i!=nums[i]){
                return i;
            }
        }
        return -1;
    }
};
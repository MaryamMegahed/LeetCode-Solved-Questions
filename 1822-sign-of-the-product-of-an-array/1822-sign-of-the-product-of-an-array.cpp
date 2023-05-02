class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int zeros=0,neg=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)zeros++;
            else if(nums[i]<0)neg++;
        }
        return zeros?0:(neg%2==0)?1:-1;
    }
};
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n,0),suffix(n,0);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1,j=n-2; i<n; i++,j--)
        {
            prefix[i]=prefix[i-1]+nums[i];
            suffix[j]=suffix[j+1]+nums[j];
        } 
        for(int i=0; i<n; i++)
        {
            if(prefix[i]==suffix[i])
            {
                return i;
            }
        }
        return -1;
    }
};
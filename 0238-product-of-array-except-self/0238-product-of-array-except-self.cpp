class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int zeros=0;
        vector<int>ans;
        long long product=1;
        for(int i=0; i<n; i++)
        {   
            if(nums[i]==0)
            {
                zeros++;
            }else 
            {product*=nums[i];
            } 
        }
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            {
                if(zeros==1)
                {
                    ans.push_back(product);
                }else ans.push_back(0);
            }
            else 
            {
                if(zeros==0)
                {
                    ans.push_back(product/nums[i]);
                }else 
                    ans.push_back(0);
            }
        }
        return ans;
    }
};
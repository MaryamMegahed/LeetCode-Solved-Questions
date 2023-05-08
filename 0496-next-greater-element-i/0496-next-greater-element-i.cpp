class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int>ans;
        bool found=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(nums1[i]==nums2[j])
                {  
                    found=false;
                    while(j<m)
                    {
                        if(nums2[j]>nums1[i])
                        {
                            ans.push_back(nums2[j]);
                            found=true;
                            break;
                        }
                        j++;
                    }
                    if(!found)ans.push_back(-1);
                    
                }
            }
        }return ans;
    }
};
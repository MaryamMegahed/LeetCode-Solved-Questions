class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        std::set<vector<int> >st;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int j,k;
        for(int i=0; i<n-2; i++)
        {
              j=i+1,k=n-1;
              while(j<k)
              {   int SumToZero=nums[i]+nums[j]+nums[k];
                  if(SumToZero==0)
                    { st.insert({nums[i],nums[j],nums[k]});
                      j++,k--;
                    }
                 else if(SumToZero<0)j++;
                 else k--;
                }
            }
        
        std::copy(st.begin(),st.end(),std::back_inserter(ans));
      
        return ans;
    }
};
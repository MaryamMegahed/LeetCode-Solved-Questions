class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int m=2005;
        vector<int> arr1(m,0),arr2(m,0),ans1(m,0),ans2(m,0);
        int n1=nums1.size(),n2=nums2.size();
        vector<vector<int>>ans(2);
        for(int i=0; i<n1; i++)
        {
            arr1[nums1[i]+1000]++;
        }
           for(int i=0; i<n2; i++)
        {
            arr2[nums2[i]+1000]++;
        }
          for(int i=0; i<n1; i++)
        {
            if(arr2[nums1[i]+1000]||ans1[nums1[i]+1000])continue;
              ans1[nums1[i]+1000]++;
              ans[0].push_back(nums1[i]);
        }
          for(int i=0; i<n2; i++)
        {
            if(arr1[nums2[i]+1000]||ans2[nums2[i]+1000])continue;
              ans2[nums2[i]+1000]++;
              ans[1].push_back(nums2[i]);
        }
        return ans;
    }
};
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
      std::unordered_map<int, int> mp;
      for (int i = 0; i < n; i++) {
        sum += nums[i];
        sum %= k;
        if (sum == 0 && i > 0) {
            return true;
        }
        if (mp.count(sum) && i - mp[sum] > 1) {
            return true;
        }
        if (!mp.count(sum)) {
            mp[sum] = i;
        }
    }
    return false;

    }
};
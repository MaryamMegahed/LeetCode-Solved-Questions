class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<long long ,int>mp;
        long long target=-1;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto i : mp)
        {
            if(i.second==1)
            {
                target=i.first;
            }
            //cout<<i.first<<" "<<i.second<<endl;
        }
        return target;
    }
};
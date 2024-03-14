class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int , int > mp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
           pq.push({i->second,i->first});
        }
        int i=1;
        while(i<=k)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        return ans;
    }
};
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int ans;
        for(int i=0; i<nums.size(); i++)
        {
            pq.push(nums[i]);
        }
        int i=1;
        while(i<=k)
        {
            if(i==k)
            {
                ans=pq.top();
            }
            pq.pop();
            i++;
        }
        return ans;
    }
};
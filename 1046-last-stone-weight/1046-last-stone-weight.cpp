class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int n=stones.size();
        for(int i=0; i<n; i++)
        {
            pq.push(stones[i]);
        }
        int l1,l2;
        while(pq.size()>1)
        {
            l1=pq.top();
            pq.pop();
            l2=pq.top();
            pq.pop();
            if(l1>l2)pq.push(l1-l2);
        }
        return pq.size()?pq.top():0;
    }
};
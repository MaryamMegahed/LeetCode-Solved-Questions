class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,greater<pair<double,vector<int>>>>pq;
        double dis;
        vector<vector<int>>ans;
        for(int i=0; i<points.size(); i++)
        {
           dis=sqrt(pow(points[i][0],2)+pow(points[i][1],2));
           pq.push({dis,points[i]});
        }
        int i=1; 
        while(i<=k)
        {
            ans.push_back({pq.top().second[0],pq.top().second[1]});
            pq.pop();
            i++;
        }
        
        return ans;
    }
};
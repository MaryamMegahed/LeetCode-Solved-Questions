class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.size();
        vector<vector<int>>adj(n);
        vector<bool>vis(n),instack(n);
        vector<vector<int>>count(n,vector<int>(26));
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            ans=max(ans,dfs(i,vis,instack,count,colors,adj));
        }
        if(ans==INT_MAX)ans=-1;
        return ans;
    }
    int dfs(int node,vector<bool>&vis,vector<bool>&instack,vector<vector<int>>&count,string &colors,vector<vector<int>>&adj)
    {
        if(instack[node])return INT_MAX;
        if(vis[node])return count[node][colors[node]-'a'];
        vis[node]=true;
        instack[node]=true;
        for(int i=0; i<adj[node].size(); i++)
        {
            if(dfs(adj[node][i],vis,instack,count,colors,adj)==INT_MAX)return INT_MAX;
            for(int j=0; j<26; j++)
            {
                count[node][j]=max(count[node][j],count[adj[node][i]][j]);
            }
        }
        instack[node]=false;
        return ++count[node][colors[node]-'a'];
    }
};
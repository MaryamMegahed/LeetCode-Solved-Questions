class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
        vector<vector<bool>>vis(n,vector<bool>(m));
        int count=0;
        for(int i=0; i<m; i++)
        {
               if(!vis[0][i]&&grid[0][i])
               {
                   dfs(0,i,grid,vis,dx,dy);
               }
               if(!vis[n-1][i]&&grid[n-1][i])
               {
                   dfs(n-1,i,grid,vis,dx,dy);
               }
         }
        for(int i=0; i<n; i++)
        {
              if(!vis[i][0]&&grid[i][0])
               {
                   dfs(i,0,grid,vis,dx,dy);
               }
               if(!vis[i][m-1]&&grid[i][m-1])
               {
                   dfs(i,m-1,grid,vis,dx,dy);
               }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1&&vis[i][j]==0)count++;
            }
        }
        return count;
    }
    void dfs(int i ,int j,vector<vector<int>>& grid,vector<vector<bool>>&vis,int         dx[],int dy[])
    {
        vis[i][j]=1;
        for(int k=0; k<4; k++)
        {
           int x=i+dx[k];
           int y=j+dy[k];
           if(x<0||x>=grid.size()||y<0||y>=grid[0].size()) continue;
           else if(grid[x][y]==1&&!vis[x][y])
           {
               dfs(x,y,grid,vis,dx,dy);
              
           }
        }
    }
};
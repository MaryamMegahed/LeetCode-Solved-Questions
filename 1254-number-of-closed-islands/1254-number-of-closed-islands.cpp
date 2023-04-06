class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
     int num_island=0;
     int dx[4]={1,0,-1,0};
     int dy[4]={0,1,0,-1};
     vector<vector<bool>>vis(105,vector<bool>(105));
   
     for(int i=0;  i<grid.size(); i++)
     {
         for(int j=0; j<grid[0].size(); j++)
         {   
             bool isclosed=true;
             if(grid[i][j]==0&&!vis[i][j]&&dfs(i,j,grid,vis,dx,dy,isclosed))
             {   
                 num_island++;
             }
         }
     }
    return num_island;}
    bool dfs(int i ,int j,vector<vector<int>>& grid,vector<vector<bool>>&vis,int dx[],int dy[],bool &isclosed)
    {
        vis[i][j]=1;
        for(int k=0; k<4; k++)
        {
           int x=i+dx[k];
           int y=j+dy[k];
           if(x<0||x>=grid.size()||y<0||y>=grid[0].size()) isclosed=false;
           else if(grid[x][y]==0&&!vis[x][y])
           {
               dfs(x,y,grid,vis,dx,dy,isclosed);
              
           }
        }
        return isclosed;
    }
};
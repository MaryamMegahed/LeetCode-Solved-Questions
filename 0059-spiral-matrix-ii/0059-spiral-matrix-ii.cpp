class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int up=0,down=n-1,left=0,right=n-1;
        vector<vector<int>>vis(n,vector<int>(n,0));
        int count=1;
        while(up<=down&&left<=right)
        {   
            for(int i=left; i<=right; i++)
            {   if(!vis[up][i])
               { 
                vis[up][i]=count++;;
               }
            }
            up++;
            for(int i=up; i<=down; i++)
            {   if(!vis[i][right])
            {
             vis[i][right]=count++;;
            }
            }right--;
            for(int i=right; i>=left; i--)
            {   if(!vis[down][i])
            {
                
                vis[down][i]=count++;
            }
            }
           down--;
            for(int i=down; i>=up; i--)
            {   if(!vis[i][left])
            {
                
                 vis[i][left]=count++;
            }
                
            }
            left++;
        }
         return vis;
    }
};
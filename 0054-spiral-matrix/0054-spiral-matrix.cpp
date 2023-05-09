class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int up=0,down=n-1,left=0,right=m-1;
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>ans;
        while(up<=down&&left<=right)
        {   
            
            for(int i=left; i<=right; i++)
            {   if(!vis[up][i])
               { ans.push_back(matrix[up][i]);
                vis[up][i]++;
               }
            }
            up++;
            for(int i=up; i<=down; i++)
            {   if(!vis[i][right])
            {ans.push_back(matrix[i][right]);
             vis[i][right]++;
            }
            }right--;
            for(int i=right; i>=left; i--)
            {   if(!vis[down][i])
            {
                ans.push_back(matrix[down][i]);
                vis[down][i]++;
            }
            }
           down--;
            for(int i=down; i>=up; i--)
            {   if(!vis[i][left])
            {
                 ans.push_back(matrix[i][left]);
                 vis[i][left]++;
            }
                
            }
            left++;
        }
         return ans;
    }
};
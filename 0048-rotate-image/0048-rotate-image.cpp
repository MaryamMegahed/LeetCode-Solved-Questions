class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        vector<vector<int>>matrix2(n,vector<int>(n,0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {  
                matrix2[j][n-i-1]=matrix[i][j];
            }
         }
            for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {  
                cout<<matrix2[i][j]<<" ";
            }cout<<endl;
         }
        matrix=matrix2;
        
    }
};
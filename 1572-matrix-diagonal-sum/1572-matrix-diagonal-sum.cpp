class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat[0].size();
        int sum=0;
        for(int i=0,j=n-1; i<n; i++,j--)
        {
            if(i==j)
            {
                sum+=mat[i][i];
            }else 
                sum+=mat[i][i]+mat[i][j];
        }
        return sum;
     }
};
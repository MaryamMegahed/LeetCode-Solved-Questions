class Solution {
public:
    int minInsertions(string s) {
        int dp[501][501],n=s.size();
        int compare,end;
        for(int i=0; i<n; i++)
        {
            dp[i][i]=1;
        }
        for(int i=0; i<n; i++)
        {
            compare=i+1;
            for(int start=0; start<n; start++)
            {   
                end=start+compare;
                if(end<n)
                {
                    if(s[start]==s[end])
                    {
                        dp[start][end]=2+dp[start+1][end-1];
                    }else 
                    {
                        dp[start][end]=max(dp[start+1][end],dp[start][end-1]);
                    }
                }
            }
        }
        return n-dp[0][n-1];
    }
};
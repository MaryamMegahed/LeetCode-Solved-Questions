class Solution {
public:
    int numberOfArrays(string s, int k) {
        long long mod=1000000007;
        int n=s.size();
        vector<int> dp(n+5,0);
        long long addition,current;
        dp[0]=1;//if string is empty them it have 1 split
        for(int start=0; start<n; start++)
        {
            if(s[start]=='0') continue;
            for(int end=start; end<n; end++)
            {
                current=s[end]-'0';
                if(start==end){addition=current;}
                else 
                    addition=(addition*10)+current;
                if(addition>k)break;
                dp[end+1]=(dp[start]+dp[end+1])%mod;
            }
        }
        return dp[n];
    }
};
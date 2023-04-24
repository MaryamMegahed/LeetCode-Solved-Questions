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
            //addition=(s[start]-'0');
            for(int end=start,i=0; end<n&&i<=9; end++,i++)
            {
                //if(s[end]-'0'>k)break;
                current=s[end]-'0';
                if(start==end){addition=current;}
                else 
                    addition=(addition*10)+current;
                if(addition>k)break;
                dp[end+1]=(dp[start]+dp[end+1])%mod;
            }
        }
        //  for(int i=0; i<n; i++){
        //     for(int j=max(0, i-9); j<=i; j++){
        //         string str=s.substr(j, i+1-j);
        //         if(str[0]=='0' || (str.size()==10 && str[0]>'1'))
        //             continue;
        //         if(stoi(str)<=k)
        //             dp[i+1]=(dp[i+1]+dp[j])%mod;
        //     }
        // }
        return dp[n];
    }
};
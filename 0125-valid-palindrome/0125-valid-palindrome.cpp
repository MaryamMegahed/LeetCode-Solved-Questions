class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]<97)
            {
                if(s[i]+32>=97&&s[i]+32<=122)ss+=(s[i]+32); //for uppercase characters
                else if(s[i]>=48&&s[i]<=57)ss+=s[i];// for numbers
            }else if(s[i]>=97&&s[i]<=122) ss+=s[i];
            
        }
        int n=ss.size();
        bool palindrome=true;
        // string reversed=ss;
        // reverse(reversed.begin(),reversed.end());
        // cout<<reversed<<endl;
        // for(int i=0; i<n; i++)
        // {
        //     if(ss[i]!=reversed[i])
        //     {
        //         palindrome=false;
        //         break;
        //     }
        // }
         for(int i=0,j=1; i<n/2; i++,j++)
        {
            if(ss[i]==ss[n-j])continue;
            else palindrome=false;
        }
        return palindrome;
    }
};
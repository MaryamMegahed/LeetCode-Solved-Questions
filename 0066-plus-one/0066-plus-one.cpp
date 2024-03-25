class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int add=1;
        for(int i=digits.size()-1; i>=0; i--)
        {
           
               add=digits[i]+add;
                if(add==10)
                {
                    ans.push_back(0);
                    add=1;
                }
               else 
               {
                   ans.push_back(add);
                   add=0;
               }
            }
        
    if(add==1) ans.push_back(1);
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
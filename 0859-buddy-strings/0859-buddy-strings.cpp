class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int>arr1(29,0),arr2(29,0);
        int num_of_swap_char=0;
        bool repeated_char=false;
        if(s.length()!=goal.length()) return false;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=goal[i]) num_of_swap_char++;
            arr1[s[i]-'a']++;
            arr2[goal[i]-'a']++;
        }
        for(int i=0; i<=28; i++)
        {
            if(arr1[i]>=2)
                repeated_char=true;
            if(arr1[i]!=arr2[i]) return false;
            
        }
        if(num_of_swap_char==2||(num_of_swap_char==0&&repeated_char))
        {
            return true;
        }else 
        {
            return false;
        }
    }
};
class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size()+1;
        vector<char>reversevowels,isVowels(n,0);
        char vowels[]={'a','e','i','o','u'};
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<5; j++)
            {
                if(s[i]==vowels[j]||s[i]==vowels[j]-32)
                {
                    reversevowels.push_back(s[i]);
                    isVowels[i]=1;
                }
            }
        }
        reverse(reversevowels.begin(),reversevowels.end());
        int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(isVowels[i])
            {
                s[i]=reversevowels[c];
                c++;
            }
        }
        return s;
        }
};
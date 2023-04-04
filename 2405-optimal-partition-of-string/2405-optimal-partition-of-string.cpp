class Solution {
public:
    int partitionString(string s) {
    vector<int>letters(28,0);
    int partitions=0;
    for(int i=0; i<s.size(); i++)
    {
        if(letters[s[i]-97]==0)
        {
            letters[s[i]-97]++;
        }else 
        {   
            fill(letters.begin(),letters.end(),0);
            letters[s[i]-97]++;
            partitions++;
        }
    }
        return ++partitions;
    }
};
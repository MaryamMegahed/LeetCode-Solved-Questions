class Solution {
public:
    int numberOfMatches(int n) {
        int numOfMatches=0,numOfTeams=n,numOfQualified=0;
        while(n>1)
        {   
            numOfQualified=0;
            numOfMatches+=int(n/2);
            if(n%2)
            {
                numOfQualified++;
            }
            n=int(n/2)+numOfQualified;
        }
        return numOfMatches;
        
    }
};
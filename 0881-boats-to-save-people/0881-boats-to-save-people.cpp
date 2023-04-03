class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     
        sort(people.begin(),people.end());
        int j=people.size()-1,i=0;
        int num_boats=0;
        for(int i=0; i<people.size()&&j>=0&&i<=j;)
        {   
            if(i==j)
            {num_boats++;
             break;
            }
            else if(people[i]+people[j]<=limit)
            {
                num_boats++;
                i++,j--;
            }else 
            {
                num_boats++;
                j--;
            }
        }
        return num_boats;
    }
};
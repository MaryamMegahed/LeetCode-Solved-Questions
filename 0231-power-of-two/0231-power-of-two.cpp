class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long power_of_two[40];
        power_of_two[0]=1;
        for(int i=1; i<=32; i++)
        {   
            if(power_of_two[i-1]==n)return true;
            power_of_two[i]=power_of_two[i-1]*2;
        }
        return false;
    }
};
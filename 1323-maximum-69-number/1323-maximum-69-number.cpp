class Solution {
public:
    int maximum69Number (int num) {
        bool flag=true;
        int mod=100000;
        while(flag&&mod)
        {   
            int a=mod>=10?((num%mod)-(num%(mod/10)))/(mod/10):(num%10);
            if(a==6)
            {
                num+=(mod/10*3);
                flag=false;
            }
            mod/=10;
        }  
        return num;
    }
};
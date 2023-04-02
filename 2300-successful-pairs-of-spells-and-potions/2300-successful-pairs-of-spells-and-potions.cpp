class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        long long multiply;
        sort(potions.begin(),potions.end());
        vector<int>ans(n,0);
        int index,mid,r,l;
        unsigned long long target;
        bool flag;
        for(int i=0; i<n; i++)
        {
            //binary search on potions
            mid=m/2+1;
            l=0,r=m-1;
            target=0;
            flag=true;
            while(l<=r&&r<=m-1&&flag)
            {
                mid=(l+r)/2;
                target=(long long)potions[mid]*(long long)spells[i];
                if(target>=success)
                {
                    if(mid==0)
                    {
                        index=mid;
                        flag=false;
                    }else 
                    {
                        if((long long)potions[mid-1]*(long long)spells[i]<success)
                        {
                            index=mid;
                            flag=false;
                        }else 
                        {
                            r=mid-1;
                        }
                    }
                }else 
                {
                    l=mid+1;
                }
            }
            if(!flag) ans[i]=m-index;
        }
        return ans;
    }
};
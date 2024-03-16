class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        vector<int>ans (temperatures.size());
        for(int i=temperatures.size()-1; i>=0; i--)
        {  
           if(st.empty())
           {
               ans[i]=0;
           }
            else 
            {   
                while(!st.empty())
                {
                    if(st.top().first<=temperatures[i])
                    {
                    st.pop();
                    }else 
                    { 
                       ans[i]=st.top().second-i;
                        break;
                        
                    }
                }
            }
             
            st.push({temperatures[i],i});
        }
        return ans;
    }
};
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        bool flag=true;
        int n=pushed.size();
        int j=0;
        for(int i=0; i<n; i++)
        {
            st.push(pushed[i]);
            while(j<n&&st.size()&&st.top()==popped[j])
            {   
                st.pop();
                j++;
            }
           
        }
        return j==n;
    }
};
class Solution {
public:
    string simplifyPath(string path) {
        stack<string>directory;
        string s="";
        for(int i=0; i<path.size(); i++)
        {   
            if(path[i]!='/'&&i==path.size()-1)s+=path[i];
            if((path[i]=='/'&&(s.size()!=0||i==0))||i==path.size()-1)
            {   
                if(s=="."){s="";continue;}
                else if(s=="..")
                {
                    if(directory.size())
                    {
                        directory.pop();
                    }
                }else 
                {   
                    if(s.size())
                    {directory.push(s);
                    }
                }
                s="";
            }
            else if(path[i]=='/'&&(s.size()==0))continue;
            else 
            {
                s+=path[i];
            }  
        }
        string ans="/";
        vector<string>pop_stack;
        while(directory.size())
        {
            pop_stack.push_back(directory.top());
            directory.pop();
        }int i=pop_stack.size()-1;
        while(i>=0)
        {
            ans+=pop_stack[i];
            if(i!=0) ans+='/';
            i--;
        }
        return ans;
    }
};
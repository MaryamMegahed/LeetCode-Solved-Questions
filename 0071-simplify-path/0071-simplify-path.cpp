class Solution {
public:
    string simplifyPath(string path) {
        stack<string>directory;
        string s="";
        for(int i=0; i<path.size(); i++)
        {   
            if(path[i]=='/')continue;
            s="";
            while(i<path.size()&&path[i]!='/')
            {
                s+=path[i];
                i++;
            }
            if(s==".")continue;
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
        }
        string ans="";
        vector<string>pop_stack;
        while(directory.size())
        {
            ans='/'+directory.top()+ans;
            directory.pop();
        }
        if(!ans.size()) ans+='/';
        return ans;
    }
};
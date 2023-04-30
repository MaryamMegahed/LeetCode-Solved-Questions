class Solution {
public:
    const int m=1e5+5;
    int parent1[100005],parent2[100005];
   
    int find1(int a){ return a == parent1[a] ? a : parent1[a] = find1(parent1[a]); }
    void join1(int a, int b) { parent1[find1(b)] = find1(a); }
    int find2(int a){ return a == parent2[a] ? a : parent2[a] = find2(parent2[a]); }
    void join2(int a, int b) { parent2[find2(b)] = find2(a); }

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        for(int i=0; i<=n; i++) parent1[i] = i;
        for(int i=0; i<=n; i++) parent2[i] = i;
        sort(edges.rbegin(),edges.rend());
        int u,v;
        int remove=0;
        for(int i=0; i<edges.size(); i++)
        {   
            u=edges[i][1];
            v=edges[i][2];
            if(edges[i][0]==1)
            {
                if(find1(u)==find1(v))
                {
                    remove++;
                }
                else
                {
                    join1(u,v);
                }
            }
            else if(edges[i][0]==2)
            {
                 if(find2(u)==find2(v))
                {
                    remove++;
                }
                else
                {
                    join2(u,v);
                }
            }
            else 
            {
                if((find1(u)==find2(v))&&(find2(u)==find2(v)))
                {
                    remove++;
                }else 
                {
                    join1(u,v);
                    join2(u,v);
                }
            }
        }
    int p1=0,p2=0;
    for(int i=1; i<=n; i++)
    {
        if(parent1[i]==i)p1++;
        if(parent2[i]==i)p2++;
    }
        
    return (p1==1&&p2==1)?remove:-1;
    }
};
class Solution {
public:
    int parent1[100005],parent2[100005];
   
    int find(int a,int parent[]){ return a == parent[a] ? a : parent[a] = find(parent[a],parent);}
    void join(int a, int b,int parent[]) { parent[find(b,parent)] = find(a,parent); }
 
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
                if(find(u,parent1)==find(v,parent1))
                {
                    remove++;
                }
                else
                {
                    join(u,v,parent1);
                }
            }
            else if(edges[i][0]==2)
            {
                 if(find(u,parent2)==find(v,parent2))
                {
                    remove++;
                }
                else
                {
                    join(u,v,parent2);
                }
            }
            else 
            {
                if((find(u,parent1)==find(v,parent1))&&(find(u,parent2)==find(v,parent2)))
                {
                    remove++;
                }else 
                {
                    join(u,v,parent1);
                    join(u,v,parent2);
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
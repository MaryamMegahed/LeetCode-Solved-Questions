/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
         unordered_map<Node*,Node*> vis;
        if(node==NULL)
            return NULL;
        if(node->neighbors.size()==0)
        {
            Node* clone= new Node(node->val);
            return clone; 
        }
        return dfs(node,vis);
    
    }
     Node* dfs(Node* cur,unordered_map<Node*,Node*>& vis)
    {
        vector<Node*> neighbours;
        Node* clone=new Node(cur->val);
        vis[cur]=clone;
            for(auto it:cur->neighbors)
            {
                if(vis.find(it)!=vis.end())  
                {
                    neighbours.push_back(vis[it]);
                }
                else
                    neighbours.push_back(dfs(it,vis));
            }
            clone->neighbors=neighbours;
            return clone;
    }
};
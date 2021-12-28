class Solution
{
public:
void dfs(vector<int> adj[],vector<bool> &visited,int x,int p){
    visited[x]=true;          //marking xth value node visited
    for(auto c:adj[x]){       //
        if(!visited[c]){      //
            if(c!=p)          //Visiting all the nodes 
            dfs(adj,visited,c,x);//recursively
        }
    }
}
   //Function to find if the given edge is a bridge in graph.
   int isBridge(int V, vector<int> adj[], int c, int d) 
   {
       // Code here
       vector<bool> visited(V+1,false);
       if(find(adj[c].begin(),adj[c].end(),d)!=adj[c].end())                   //Checking for existence of node d
       adj[c].erase(find(adj[c].begin(),adj[c].end(),d));                     //Deleting the node d
       if(find(adj[d].begin(),adj[d].end(),c)!=adj[d].end())                 //Checking for existence of node c
       adj[d].erase(find(adj[d].begin(),adj[d].end(),c));                   //Deleting the node c
       dfs(adj,visited,d,-1);                                              //Traversing the whole graph from node d
       return !visited[c]?1:0;                                            //checking that whether still there is path from node d to c 
   }
};

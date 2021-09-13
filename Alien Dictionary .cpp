class Solution{
    public:
    void topo(int u,unordered_set<int> adj[],vector<bool> &vis,string &s)
{
    vis[u]=true;
    
    for(auto i:adj[u])
    if(!vis[i])
    topo(i,adj,vis,s);
    
    s.insert(s.begin(),'a'+(char)u);
}
string findOrder(string dict[], int N, int K)
{
    unordered_set<int> adj[K];
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<min(dict[i].length(),dict[i+1].length());j++)
        {
            if(dict[i][j]!=dict[i+1][j])
            { 
                adj[dict[i][j]-'a'].insert(dict[i+1][j]-'a');
                break;
            }
        }
    }
    string s;
    vector<bool> vis(K,false);
    
    for(int i=0;i<K;i++)
    if(!vis[i])
    topo(i,adj,vis,s);
    
    return s;
}

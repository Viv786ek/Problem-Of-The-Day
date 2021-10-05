class Solution
{
    
    void getTanks(int n, vector<vector<int>> &adj, unordered_map<int,int> &tanks) {
        for(int j=0;j<n;j++) {
            int i=0;
            while(i<n) {
                if(adj[i][j]!=0) break;
                i++;
            }
            if(i==n) tanks[j]++;
        }
    }
    pair<int,int> minDFS(int curr, vector<vector<int>> &adj) {
        for(int i=0;i<adj.size();i++) {
            if(adj[curr][i]!=0) {
                pair<int,int> temp=minDFS(i,adj);
                return {min(adj[curr][i],temp.first),temp.second};
            }
        }
        return {INT_MAX,curr};
    }
    public:
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        // code here
         vector<vector<int>> adj(n, vector<int>(n,0));
        for(int i=0;i<p;i++) {
            adj[a[i]-1][b[i]-1]=d[i];
        }
        unordered_map<int,int> tanks;
        getTanks(n,adj,tanks);
        vector<vector<int>> res;
        for(int i=0;i<n;i++) {
            if(tanks.find(i)!=tanks.end()) {
                pair<int,int> t=minDFS(i,adj);
                if(t.first!=INT_MAX) res.push_back(vector<int>{i+1,t.second+1,t.first}); //single house with no outgoing and no incoming
            }
        }
        return res;
    }
};

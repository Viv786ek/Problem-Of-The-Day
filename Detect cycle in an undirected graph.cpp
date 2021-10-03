class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    vector<bool> vis;
bool ans;
void dfs(vector<int> adj[], int v, int p) {
    vis[v] = true;
    for (auto x : adj[v]) {
        if (x == p)continue;
        if (vis[x]) {
            ans = true;
            return;
        }
        else dfs(adj, x, v);
    }
}
bool isCycle(int n, vector<int> adj[]) {
    vis.assign(n + 1, false);
    ans = false;
    for (int i = 0; i < n; i++)if (!vis[i])dfs(adj, i, -1);
    return ans;
}
};

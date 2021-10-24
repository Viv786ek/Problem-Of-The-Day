vector<int> parent;
int find(int v) {
    if (parent[v] == -1)return v;
    return parent[v] = find(parent[v]);
}
void combine(int u, int v) {
    u = find(u), v = find(v);
    parent[u] = v;
}
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        parent.assign(V + 1, -1);
    vector<array<int, 3>> edges;
    for (int i = 0; i < V; i++) {
        for (auto x : adj[i])edges.push_back({x[1], i, x[0]});
    }
    sort(edges.begin(), edges.end());
    int ans = 0;
    for (auto x : edges) {
        if (find(x[1]) != find(x[2]))ans += x[0], combine(x[1], x[2]);
    }
    return ans;
    }

vector<int> indeg(n, 0), topo, dp(n, 0), adj[n];
	queue<int> q;
	for(int i=0;i<m;i++)indeg[d[i].second]++,adj[d[i].first].push_back(d[i].second);
	for (int i = 0; i < n; i++)if (indeg[i] == 0)q.push(i), dp[i] = dur[i];
	while (!q.empty()) {
		auto x = q.front(); q.pop();
		topo.push_back(x);
		for (auto v : adj[x]) {
			dp[v] = max(dp[v], dur[v] + dp[x]);
			if (--indeg[v]==0)q.push(v);
		}
	}
	if (topo.size() != n)return -1; // contains cycle !!!
	return *max_element(dp.begin(), dp.end());

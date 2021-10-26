int count(int n, vector<int> a,int x)
    {
        // code here
        int msb = __lg(x), ans = n, temp = 0, vis[n] = {0};
	for (int i = 30; i >= 0; i--) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (!vis[j] && ((x >> i) & 1) && !((a[j] >> i) & 1) )temp++, vis[j] = 1;
			if (!((a[j] >> i) & 1) && !vis[j])cnt++;
		}
		if (!((x >> i) & 1))ans = min(ans, temp + cnt);
	}
	return ans;
    }

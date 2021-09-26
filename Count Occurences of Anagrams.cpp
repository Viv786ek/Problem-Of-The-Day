	int search(string pat, string txt) {
	    // code here
	    vector<int> cnt(26, 0), t(26, 0);
    for (auto c : pat)cnt[c - 'a']++;
    int ans = 0, k = pat.size(), n = txt.size();
    for (int i = 0; i < n; i++) {
        t[txt[i] - 'a']++;
        if (i >= k)t[txt[i - k] - 'a']--;
        bool f = 1;
        for (int j = 0; j < 26; j++)if (cnt[j] != t[j])f = 0;
        ans += f;
    }
    return ans;
	}

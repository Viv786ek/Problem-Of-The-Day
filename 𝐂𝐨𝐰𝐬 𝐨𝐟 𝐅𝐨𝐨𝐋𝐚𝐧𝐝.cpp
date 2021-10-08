void multiply(vector<vector<int64_t>> &a, vector<vector<int64_t>> &b) {
    vector<vector<int64_t>> c(2, vector<int64_t>(2, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int l=0;l<2;l++)(c[i][j]+=a[i][l]*b[l][j])%=((int)1e9 + 7);
        }
    }
    a = c;
}
int TotalAnimal(int64_t n) {
    vector<vector<int64_t>> ans(2, vector<int64_t>(2, 1)), d(2, vector<int64_t>(2, 1));
    d[1][1] = ans[0][1] = ans[1][0] = 0;
    while (n > 0) {
        if (n & 1)multiply(ans, d);
        multiply(d, d);
        n >>= 1;
    }
    return ans[0][0];
}

long long countSubarray(int n, vector<int> A, long long L, long long R) {
    int64_t ans = 0, l = 0, r = 0, sum = 0;
    while (r < n) {
        sum += A[r];
        while (l <= r && sum > R)sum -= A[l], l++;
        ans += r - l + 1; // inclusion of subarrays ending at r, with sum <= R.
        r++;
    }
    r = 0, l = 0, sum = 0;
    while (r < n) {
        sum += A[r];
        while (l <= r && sum >= L)sum -= A[l], l++;
        ans -= r - l + 1; // exclution of subarrays ending at r, with sum < L.
        r++;
    }
    return ans;
}

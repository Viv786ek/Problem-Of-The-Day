class Solution {
  public:
  void solve(int p, int k, int i, int arr[], int n, int &count)
{
if(i>=n or p>k)
return;
if(p*arr[i]<=k)
count++;
solve(p*arr[i], k, i+1, arr, n, count);
solve(p, k, i+1, arr, n, count);
}
    int numOfSubsets(int arr[], int N, int K) {
        // code here
        int count=0;
solve(1, K, 0, arr, N, count);
return count;
    }
};

class Solution{
  public:
    /*You are required to complete this method */
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int a = A.length(), b = B.length(), c = C.length();
        if(a+b != c) return false;
        bool dp[a+1][b+1];
        dp[0][0] = true;
        for(int i=1; i<=a; i++)
            dp[i][0] = (dp[i-1][0] && A[i-1] == C[i-1]);
        for(int j=1; j<=b; j++) 
            dp[0][j] = (dp[0][j-1] && B[j-1] == C[j-1]);
        for(int i=1; i<=a; i++) {
            for(int j=1; j<=b; j++) {
                dp[i][j] = (dp[i-1][j] && A[i-1] == C[i+j-1]) ||
                            (dp[i][j-1] && B[j-1] == C[i+j-1]);
            }
        }
        return dp[a][b];
    }

};

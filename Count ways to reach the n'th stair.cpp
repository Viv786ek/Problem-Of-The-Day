class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        //return (1+(n/2));
        long long dp[n+1];
    
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2])%1000000007;
    }
    
    return dp[n];
    }
};
